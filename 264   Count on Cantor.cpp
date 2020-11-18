#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,j;
    while(scanf("%lld",&n)!=EOF)
    {
      ll c=0,a1,a2,g=0;
      for(int p=1;;p++)
      {
          if(p%2==1)
          {
              for( i=p,j=1;i>=1;i--,j++)
              {
                  c++;
                  if(c==n){a1=i,a2=j; g=1; break;}
              }

          }
          else
          {
              for(i=1,j=p;i<=p;i++,j--)
              {
                  c++;
                  if(c==n){a1=i,a2=j; g=1; break;}
              }
          }
          if(g==1)break;
      }
      cout<<"TERM "<<n<<" IS "<<a1<<"/"<<a2<<endl;
      c=0;
      g=0;
    }


}
