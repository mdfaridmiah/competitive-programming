#include<stdio.h>
int main()
{
    int a[26],k=0,l,c,m=10,p,n,i,j,test;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d",&n);
        a[k]=n;
        l=0;
        c=0;
        p=0;
        if(n>10)
        {
            c=n-m;
            for(j=0; j<=k; j++)
            {
                if(n==a[l])
                {
                    c=c+1;
                    p=p+1;
                    if(c>10)
                        break;
                }
                l++;
            }
            n=m;
        }
        else
        {
            for(j=0; j<=k; j++)
            {
                if(n==a[l])
                {
                    c=c+1;
                    p=p+1;
                    if((p-1)>=n)
                        break;
                }
                l++;
            }
        }
        k++;
        printf("%d %d\n",(c-1),n-(p-1));

    }
    return 0;

}
