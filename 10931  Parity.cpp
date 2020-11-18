#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    while(1)
    {
        ll n,i,c=0;
        cin>>n;
        vector<int > a;
        if(n==0)return 0;
        while(n!=0)
        {
           if(n%2==1)c++;
           a.push_back(n%2);
           n=n/2;
        }
        reverse(a.begin(),a.end());
        cout<<"The parity of ";
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i];
        }
        cout<<" is "<<c<<" (mod 2).";
        cout<<endl;
    }


}
