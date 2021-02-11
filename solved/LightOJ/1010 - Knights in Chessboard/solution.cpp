#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

char nm[10005];
long long ar[1000005];
int main()
{
    long long a,b,tk,i,c=0,mx,rc,len;

    scanf("%lld",&tk);
    while(tk--)
    {
        c++;
        mx=0;
        scanf("%lld%lld",&a,&b);
        rc=a*b;
        if(a<b)
            mx=b;
        else mx=a;

        if(a==1||b==1)
            printf("Case %lld: %lld\n",c,mx);
        else if(a==2||b==2)
        {
            if(mx%4==0)
                printf("Case %lld: %lld\n",c,mx);
            else if(mx%4==3||mx%4==1)
                printf("Case %lld: %lld\n",c,mx+1);
            else printf("Case %lld: %lld\n",c,mx+2);

        }
        else if(rc & 1)
            printf("Case %lld: %lld\n",c,(rc+1)/2);
        else printf("Case %lld: %lld\n",c,rc/2);
    }

    return 0;
}
