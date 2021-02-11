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
    long long n,a,b,tk,i,j,k,c=0,mx,len,res,temp;

    scanf("%lld",&tk);
    while(tk--)
    {
        c++;
        i=0;
        scanf("%lld",&n);
        temp=n;
        if(n>=0&&n<10) printf("Case %lld: Yes\n",c);
        else
        {
            while(n!=0)
            {
                i=(i*10)+(n%10);
                n=n/10;
            }
            if(temp==i)  printf("Case %lld: Yes\n",c);
            else printf("Case %lld: No\n",c);
        }
    }

    return 0;
}
