#include<stdio.h>
int main()
{
    long long dec;
    int i,j,rem,c,test;

scanf("%d",&test);
    for(j=1; j<=test; j++)
    {
        scanf("%lld",&dec);

        i=0;
        c=0;
        while(dec!=0)
        {
            rem=dec%2;

            dec=dec/2;
            if(rem==1)
            {
                c++;
            }

        }
        if(c%2==0)
            printf("Case %d: even\n",j);
        else
            printf("Case %d: odd\n",j);
    }

    return 0;
}









