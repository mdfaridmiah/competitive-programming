#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

char ch[10005],nm[10005],nnm[10005];
long long ar[1000005];
int main()
{
    long long n,a,b,c=0,tk,i,j,k,cnt,mx,len,res,temp;
    long long x1,x2,x3,x4,y1,y2,y3,y4,x,y;

    scanf("%lld",&tk);
    while(tk--)
    {
        c++;
        scanf("%lld%lld",&a,&b);
        res=(a*b)/2;
        printf("Case %lld: %lld\n",c,res);
    }
    return 0;
}
