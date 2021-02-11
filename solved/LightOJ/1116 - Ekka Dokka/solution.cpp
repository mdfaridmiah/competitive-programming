# include <stdio.h>
# include <iostream>
# include <math.h>
using namespace std;

long long primeFactors(long long n)
{
    while (n%2 == 0)
    {
        n = n/2;
    }
    return n;
}

int main()
{
    long long n,i,j,tk,c=0;
    scanf("%lld",&tk);
    while(tk--)
    {
        c++;
        scanf("%lld",&n);
        if(n%2==0)
        {
            i=primeFactors(n);
            j=n/i;
            printf("Case %lld: %lld %lld\n",c,i,j);
        }
        else printf("Case %lld: Impossible\n",c);
    }

    return 0;
}
