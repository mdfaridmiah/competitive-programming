#include<bits/stdc++.h>
using namespace std;

const int mx =  1234567;
const double exp1 =  1e-6;
const int md =  1e9+7;
typedef long long ll;

//int ar[mx],xar[mx],uses[mx];
//ll arr[mx];
//int tab[1000][1000];
//string st[1000];
//ll ar1[mx],ar2[mx];
//map<int ,int>mpii;
//map<int ,char>mpic;
//map<char ,int>mpci;
//pair<int, int>pr[mx];

double x,y,c;

double sol_c(double p){
    double h1,h2,h3;
    h2 = sqrt((x*x)-(p*p));
    h3 = sqrt((y*y)-(p*p));
    h1 = (h2*h3)/(h2 + h3);
    return h1;
}

int main(){

    int cs=0,tk=1,n,m;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

    scanf("%d",&tk);
    while(tk--){
        /** c = H1*H2 /(H1+H2)
            From triangle ratio.
        */

        scanf("%lf%lf%lf",&x,&y,&c);
        double mid,lo=0.0,hi = min(x,y);
        int cnt = 200;
        double ans = 0;
        while(cnt--){
            mid = (hi+lo) / 2.0;
            if(fabs(sol_c(mid) - c ) <= exp1){
                ans =  mid;
                break;
            }
            if( sol_c(mid) <= c ){
                hi = mid;

            }else {
              lo = mid;
            }
        }
    printf("Case %d: %.10f\n",++cs,ans);

    }

    return 0;
}

