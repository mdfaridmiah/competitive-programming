#include<stdio.h>
#include<math.h>
int main()
{
    int T,cc=0;
    long long int i,s,r,c;
    scanf("%d",&T);
    while(T--)
    {
        cc++;
        scanf("%lld",&s);
        i=ceil(sqrt(s));
        if(i%2!=0)
        {
            if((i*i-s)<i)
            {
                r=i;
                c=i*i-s+1;
            }
            else
            {
                r=s-((i-1)*(i-1));
                c=i;
            }
        }
        else
        {
            if((i*i-s)<i)
            {
                c=i;
                r=i*i-s+1;
            }
            else
            {
                c=s-((i-1)*(i-1));
                r=i;
            }
        }
        printf("Case %d: %lld %lld\n",cc,c,r);
    }
    return 0;
}
