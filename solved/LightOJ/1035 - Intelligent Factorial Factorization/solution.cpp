//Every prime factor of n! is less than or equal to n
//(n!) for all primes p<=n. From Euclid’s First Theorem

#include<stdio.h>
#include<math.h>
void res(int a,int b)
{
    int p,ncnt=0;
    while(b>0)
    {
        p=b/a;
        ncnt=ncnt+p;
        b=p;
    }
    printf(" %d (%d)",a,ncnt);
}
int main()
{
    int pp[]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103 };
    int i,l,num,T,n;
    scanf("%d",&T);
    for(n=1; n<=T; n++)
    {
        scanf("%d",&num);
        printf("Case %d: %d =",n,num);
        for(i=0; pp[i]<=num; i++)
        {
            l=pp[i];
            if(i!=0)
            {
                printf(" *");
            }
            res(l,num);
        }
        printf("\n");
    }
    return 0;
}
