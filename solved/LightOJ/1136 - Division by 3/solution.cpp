#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

char nm[10005],nnm[10005];
long long ar[1000005];

int main()
{
    long long n,a,b,tk,i,j,k,c=0,cnt,mx,len,res,temp;

    scanf("%lld",&tk);
    while(tk--)
    {
        cnt=0;
        c++;
        scanf("%lld%lld",&a,&b);
        a--;
        temp=ceil(a/3.0);
        a=a-temp;
        temp=ceil(b/3.0);
        b=b-temp;
        res=b-a;
        printf("Case %lld: %lld\n",c,res);
    }
    return 0;
}
