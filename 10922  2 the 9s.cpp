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
        int d=n.size(),sum=0;
        for(int i=0;i<d;i++)
        {
            //res=(res*10+n[i]-'0')%9;
            sum+=n[i]-'0';
        }
        int x=sum,v=1,y;
        while(x>9)
        {
            y=0;
            while(x!=0)
            {
              y+=x%10;
              x=x/10;
            }
            x=y;
            v++;
        }

      if(sum%9!=0)cout<<n<<" is not a multiple of 9."<<endl;
      else cout<<n<<" is a multiple of 9 and has 9-degree "<<v<<"."<<endl;

      }


}

