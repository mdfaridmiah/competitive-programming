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
    long long n,a,b,tk,i,j,k,c=0,cnt,mx,len,res,temp;
    long long x1,x2,x3,x4,y1,y2,y3,y4,x,y;
    long long s1,s2,ss;
    scanf("%lld",&tk);
    while(tk--)
    {
        c++;
        scanf("%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3);
        x=x2-x1;
        y=y2-y1;
        x4=x3-x;
        y4=y3-y;
        s1=((x4*y1)-(x1*y4))+((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3));
        if(s1<0)
            s1=-1*s1;
        ss=0.5*s1;

        printf("Case %lld: %lld %lld %lld\n",c,x4,y4,ss);
    }
    return 0;
}
