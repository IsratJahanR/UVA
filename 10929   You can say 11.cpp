#include<bits/stdc++.h>
#include<stdio.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    string n;
    while(1)
    {
        cin>>n;
        if(n=="0")return 0;
        int res=0;
        for(int i=0;i<n.size();i++)
        {
            res=(res*10+n[i]-'0')%11;
        }

      if(res==0)cout<<n<<" is a multiple of 11."<<endl;
      else cout<<n<<" is not a multiple of 11."<<endl;
    }


}
