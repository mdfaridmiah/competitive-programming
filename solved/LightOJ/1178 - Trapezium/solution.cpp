#include <stdio.h>
#include <math.h>

int main()
{
    int tk,k=0;
    double a,b,c,d,s,h,de,area,result;
    scanf("%d",&tk);

    while(tk--)
    {
        k++;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        de=fabs(a-c);
        s = (b+d+de)/2.0;
        area = sqrt(s*(s-d)*(s-b)*(s-de));
        h = (2*area)/(fabs(a-c));
        result = ((a+c)*h)/2;
        //formula area=h(a+c)/2;
        printf("Case %d: %.8f\n",k,result);
    }

    return 0;
}
