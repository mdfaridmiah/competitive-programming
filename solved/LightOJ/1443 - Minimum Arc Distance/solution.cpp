#include<stdio.h>
#include<math.h>
int main()
{
    int o1,o2,a1,a2,b1,b2,test,i;
    double oa,ob,ab,ang,s,A,c;
    const double pi=2*acos(0.0);
    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        ang=0;
        scanf("%d %d %d %d %d %d",&o1,&o2,&a1,&a2,&b1,&b2);
        oa=sqrt(((o1-a1)*(o1-a1))+((o2-a2)*(o2-a2)));
        ob=sqrt(((o1-b1)*(o1-b1))+((o2-b2)*(o2-b2)));
        ab=sqrt(((a1-b1)*(a1-b1))+((a2-b2)*(a2-b2)));
        if(oa==0.0||ab==0.0){
            s=0.0;
        }
else
{
        A=(((oa*oa)+(ob*ob)-(ab*ab))/(2.0*oa*ob));
        ang=acos(A);
        s=oa*ang;

}
 printf("Case %d: %.5lf\n",i,s);

    }
    return 0;
}
