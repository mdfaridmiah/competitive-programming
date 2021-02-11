#include <bits/stdc++.h>
using namespace std;

int const N = 123456;
const double eps = 1e-6;
#define pi acos(-1.0)


struct point{
     double x, y;
     int id;
     point() {}
     point(double x, double y) : x(x), y(y) {}
 }p[N];

double cross(point a,point b,point c) {
	return (c.x - a.x)*(b.y - a.y) - (b.x - a.x)*(c.y - a.y);
}


bool cmp(point a,point b){
	return cross(p[0],a,b) < eps;
}


int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%lf%lf",&p[i].x,&p[i].y);
		p[i].id = i+1;
	}
	int t = 0;
	for(int i=1; i<n; i++)
		if( p[i].x < p[t].x || (p[i].x == p[t].x && p[i].y < p[t].y) )
			t = i;
	swap(p[t],p[0]);
	sort(p+1,p+n,cmp);

//	for(int i = 0; i < n; i++){
//        cout<<p[i].x<<" "<<p[i].y<<" "<<p[i].id<<endl;
//	}


	printf("%d %d\n",(int)p[0].id,(int)p[(n/2)].id);
return 0;
}
