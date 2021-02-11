#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define se second
#define SZ 1000005
const int mx = 1234567;
const double eps = 1e-6;
const int md = 1e9+7;
const double pi = acos(-1.0);

typedef long long ll;

int dr[8] = {-1,-1,+0,+1,+1,+1,+0,-1};// counter clockwise
int dc[8] = {+0,-1,-1,-1,+0,+1,+1,+1};

//int ar[mx],xar[mx],uses[mx];
//ll arr[mx];
//int tab[1000][1000];
//string st[1000];
//map<int ,int>mpii;
//map<int ,char>mpic;
//map<char ,int>mpci;
//pair<int, int>pr[mx];
//string yes = "YES", no = "NO";
//
//int ar1[mx],ar2[mx],ar3[mx],ar4[mx];

struct points3d {
     int x, y, z;
     points3d() {}
     points3d(int x, int y, int z) : x(x), y(y), z(z) {}
     points3d(const points3d &p) : x(p.x), y(p.y), z(p.z){}


 }p1[105],p2[105];

int main(){

    int tk=1,cs=0,n,m;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

    ll x,p,q;
    scanf("%d",&tk);
    while(tk--){
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d%d%d",&p1[i].x,&p1[i].y,&p1[i].z);
            scanf("%d%d%d",&p2[i].x,&p2[i].y,&p2[i].z);
        }

        for(int i = 0; i < n; i++){
            p1[0].x = max(p1[0].x, p1[i].x);
            p1[0].y = max(p1[0].y, p1[i].y);
            p1[0].z = max(p1[0].z, p1[i].z);

            p2[0].x = min(p2[0].x, p2[i].x);
            p2[0].y = min(p2[0].y, p2[i].y);
            p2[0].z = min(p2[0].z, p2[i].z);
        }
//        printf("%f %f %f\n",p1[0].x,p1[0].y,p1[0].z);
//        printf("%f %f %f\n",p2[0].x,p2[0].y,p2[0].z);
        if(p1[0].x < p2[0].x && p1[0].y < p2[0].y && p1[0].z < p2[0].z){
            printf("Case %d: %lld\n",++cs, ll((p2[0].x - p1[0].x)*(p2[0].y - p1[0].y)*(p2[0].z - p1[0].z)));
            continue;
        }
        printf("Case %d: 0\n",++cs);


    }
    return 0;
}


