#include<stdio.h>
#include<math.h>

int main(){
    int test,i;
    double r1,r2,r3,a,b,c,A,B,C,area,area1,area2,area3,ajent_area,s;
      
    const double pi=(2*acos(0.0));
    scanf("%d",&test);
    for(i=1; i<=test; i++){
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        s=(a+b+c)/2.0;
        area=sqrt((s*(s-a)*(s-b)*(s-c)));
         A=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
        B=acos(((c*c)+(a*a)-(b*b))/(2*c*a));
        C=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        area1=(pi*r3*r3*A)/(2*pi);
        area2=(pi*r2*r2*B)/(2*pi);
        area3=(pi*r1*r1*C)/(2*pi);
        ajent_area=area-(area1+area2+area3);
        printf("Case %d: %lf\n",i,ajent_area);
    }

    return 0;
}
