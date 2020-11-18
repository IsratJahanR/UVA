#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;
bool prime (int n)
{
    if(n<=1)return false;
    else if(n<=3)return true;
    else if(n%2==0 || n%3==0)return false;
    else
    {
        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)return false;
        }
        return true;
    }
}
int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        int res=0;
        if(prime(n))cout<<0<<endl;
        else
        {
            for(int i=n-1;i>=2;i--)
            {
                if(prime(i)){res=i; break;}
            }
            for(int i=n+1;;i++)
            {
                if(prime(i)){res=i-res; break;}
            }
            cout<<res<<endl;
        }
    }



}
