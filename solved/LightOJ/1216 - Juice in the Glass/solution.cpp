#include<stdio.h>
#include<math.h>

int main()
{
    int i,test,r1,r2,h,p;
    const double pi=(2*acos(0.0));
    double r,v;

    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d %d",&r1,&r2,&h,&p);
        r=((((r1-r2)*p)/(double)h)+r2);
        v=((((r*r)+(r2*r2)+(r*r2))*p*pi)/3.0);
        printf("Case %d: %.10lf\n",i,v);
    }
    return 0;
}
