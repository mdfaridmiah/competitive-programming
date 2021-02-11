#include <stdio.h>
#include <math.h>

#define pi acos(0.0)*2
int main()
{
    int t,co=1;
    double R,n,c,d,f,g,h;
    double r;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf%lf", &R, &n);
        c=(pi/n);
        d=sin(c);
        r=(R*d)/(1+d);


        printf("Case %d: %.10lf\n",co,r);
        co++;
    }
    return 0;
}
