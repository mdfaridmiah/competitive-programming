#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

long long dectobi(long long n)
{
    long long rem,ii=1,bi=0;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        bi=bi+(rem*ii);
        ii=ii*10;
    }
    return bi;

}

char ch[10005],nm[10005],nnm[10005];
long long ar[1000005];

int main(){

    long long n,a,b,c=0,tk,i,j,k,cnt,mx,len,res,temp;
    long long x1,x2,x3,x4,y1,y2,y3,y4,x,y;
    long long s1,s2,ss;
    scanf("%lld",&tk);
    while(tk--)
    {
        c++;
        scanf("%lld.%lld.%lld.%lld",&x1,&x2,&x3,&x4);
        y1=dectobi(x1);
        y2=dectobi(x2);
        y3=dectobi(x3);
        y4=dectobi(x4);
        scanf("%lld.%lld.%lld.%lld",&x1,&x2,&x3,&x4);
        if(y1==x1&&y2==x2&&y3==x3&&y4==x4)
        {
            printf("Case %lld: Yes\n",c);
        }
        else printf("Case %lld: No\n",c);
    }
    return 0;
}
