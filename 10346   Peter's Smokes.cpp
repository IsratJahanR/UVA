#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p;
    while(scanf("%d%d",&n,&k)==2)
    {
        int s=0;
        p=n;
        while(n>=k)
        {
            s+=n/k;
            n=(n/k)+(n%k);

        }
        cout<<s+p<<endl;
    }
}
