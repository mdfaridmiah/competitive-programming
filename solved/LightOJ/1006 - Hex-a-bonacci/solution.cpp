#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;

    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        long long f[10005],n,i;
        for(i=0; i<6; i++)
        {
            scanf("%lld",&f[i]);
        }
        
         scanf("%d",&n);

        for(i=6; i<=n; i++)
        {
            f[i]=(f[i-1]+f[i-2]+f[i-3]+f[i-4]+f[i-5]+f[i-6])%10000007;
        }
        
        printf("Case %d: %lld\n",k,f[n]% 10000007);
    }
    return 0;
}
