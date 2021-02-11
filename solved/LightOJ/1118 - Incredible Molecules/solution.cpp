#include<bits/stdc++.h>
using namespace std;

const int mx = 123456;
const double pi = acos(-1); // A * pi/180 = rad
int ar[mx];

double radtodeg(double rad){return rad * (180.0/pi);}
double degtorad(double ang){return ang * (pi/180.0);}

double sector(double r, double ang){

       double a = (ang * pi / 360.0);
       a = a - (0.5 * sin(degtorad(ang)) );
       return a * r * r;

 }
 

int main(){

    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);
    int tk,cs = 0;

    scanf("%d",&tk);
    while(tk--){
        double r1,r2,x1,y1,x2,y2;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);
        double d = sqrt((fabs(x2-x1) * fabs(x2-x1)) + (fabs(y2-y1) * fabs(y2-y1)));
       // cout<<" dis :"<<d<<endl;

        if (d>=r1+r2){
            printf("Case %d: 0\n",++cs);
             
            continue;
        }
        if(d<=fabs(r1-r2)){
            printf("Case %d: %.10lf\n",++cs,pi * min(r1,r2)*min(r1,r2) );
             
            continue;
        }

       double area = 0.0;
       double ang = acos((r1 * r1 + d * d - r2 * r2) / (2.0 * r1 * d));
       ang = 2 *radtodeg(ang);
       area += sector(r1,ang);

         

       ang =  acos((r2 * r2 + d * d - r1 * r1) / (2.0 * r2 * d));
       ang = 2 * radtodeg(ang);
       area += sector(r2,ang);
        
       printf("Case %d: %.10lf\n",++cs,area);

    }


  return 0;

}
