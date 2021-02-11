#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 0x3f3f3f3f;
double a,b, c, rat;
double getArea(double a, double b, double c)
{
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    int T, cas = 0;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &rat);
        double l = 0, r = a;
        double area = getArea(a, b, c);
        while(r - l > 1e-7)
        {
            double mid = (l+r)/2;
            double s = getArea(mid, mid*b/a, mid*c/a);
            double x = area - s;
            if(s/x < rat)
                l = mid;
            else
                r = mid;
        }
        printf("Case %d: %.10f\n",++cas, l);
    }
    return 0;
}
