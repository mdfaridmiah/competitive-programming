#include<stdio.h>
long long mx=1000003;
long long f[1000005];

//Using Euler's theorem
long long mod(long long b,long long p)
{
    if(p==1)
        return b;
    if(p%2==1)
        return(mod(b,p-1)*b)%mx;
    else
    {
        long long res=mod(b,p/2);
        return (res*res)%mx;
    }
}

int main()
{
    long long tk,n,r,s,res,c=0;
    scanf("%lld",&tk);
    f[1]=1;
    for(long i=2; i<1000001; i++)
        f[i]=(i*f[i-1])%mx;
    while(tk--)
    {
        scanf("%lld%lld",&n,&r);
        if(n<r)
        {c++;
            printf("Case %d: 0\n",c);
            continue;
        }
        else if(n==r||r==0)
        {
            c++;
            printf("Case %d: 1\n",c);
            continue;
        }
        s=((f[n-r]%mx)*(f[r]%mx))%mx;
        c++;
        //printf("Case %lld: %lld\n",++no,(f[n]*s)%mx);
        printf("Case %lld: %lld\n",c,(f[n]*mod(s,mx-2))%mx);

    }
    return 0;
}