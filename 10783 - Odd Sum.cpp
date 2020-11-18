#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0 ; cin>>t;
    while(t--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        j++;
        if(a%2==0)a++;
        for(int i=a;i<=b;i+=2)sum+=i;
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
}
