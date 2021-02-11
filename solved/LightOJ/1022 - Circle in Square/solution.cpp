#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double pi,a2,a1,r;
    pi=(2*acos(0.0));
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        a1=0;
        a2=0;
        scanf("%lf",&r);
        a1=((r+r)*(r+r));
        a2=(pi*r*r);
        printf("Case %d: %.2lf\n",i,(a1-a2));
    }
    return 0;
}
