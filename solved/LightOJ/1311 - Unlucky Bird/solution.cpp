#include<stdio.h>
int main()
{
    double v1,v2,v3,a1,a2,t1,t2,d,birdD;
    int i,test;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        t1=v1/(double)a1;
        t2=v2/(double)a2;
        d = (v1*t1-0.5*a1*t1*t1)+(v2*t2-0.5*a2*t2*t2);
        if(t1>t2)
        {
            birdD=v3*t1;
        }
        else
        {
            birdD=v3*t2;
        }
        printf("Case %d: %.8lf %.8lf\n",i,d,birdD);
    }

    return 0;
}
