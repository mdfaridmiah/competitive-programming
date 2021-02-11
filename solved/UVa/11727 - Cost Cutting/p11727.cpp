#include<bits/stdc++.h>
using namespace std;

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

int ar[mx],xar[mx],uses[mx];
ll arr[mx];
int tab[1000][1000];
string st[1000];
map<int ,int>mpii;
map<int ,char>mpic;
map<char ,int>mpci;
pair<int, int>pr[mx];

int ar1[mx],ar2[mx],ar3[mx],ar4[mx];

int main(){

    int tk=1,cs=0,n,m;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

    string s;
    ll x,p,q;
    scanf("%d",&tk);
    while(tk--){
        int k;
        scanf("%d%d%d",ar + 0, ar + 1, ar + 2);
        sort(ar, ar + 3);
        printf("Case %d: %d\n",++cs,ar[1]);
    }
    return 0;
}


