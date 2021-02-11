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
    long long a,b,tk,i,c=0,mx,len,res;

    scanf("%lld",&tk);
    while(tk--)
    {
        res=0;
        c++;
        scanf("%lld%lld",&a,&b);
        if(a>b)
            mx=a-b;
        else mx=b-a;
        res=9+10+(mx*4)+(4*a);
        printf("Case %lld: %lld\n",c,res);

    }

    return 0;
}
