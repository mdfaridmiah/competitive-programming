#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define se second

const int mx = 1234567;
const int md = 1e9 + 7;
const int inf = 1e100;
const double eps = 1e-6;
const double pi = acos(-1.0);

typedef long long ll;

int dr[8] = { -1, -1, +0, +1, +1, +1, +0, -1}; // counter clockwise
int dc[8] = { +0, -1, -1, -1, +0, +1, +1, +1};
int dr4[4] = { -1, +1, +0, +0}; //UDLR
int dc4[4] = { +0, +0, -1, +1};

int ar[mx], xar[mx], uses[mx];
ll arr[mx];
int tab[1000][1000];
string st[1000];
int ar1[mx], ar2[mx], ar3[mx], ar4[mx];


bool cmp(const pair<int,int> &a,const pair<int,int> &b){
       return a.fi > b.fi;
}


int w[mx];

void solve() {
  int n, m;
  ll ans = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d",w + i);
    ans += w[i];
  }
  vector<int> g[n+1];

  for (int i = 0; i < n - 1; i++) {
    int u, v;
    scanf("%d%d",&u, &v);
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  vector<int> ww;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < g[i].size() - 1; j++){
      ww.push_back(w[i]);
    }
  }
  sort(ww.rbegin(),ww.rend());
  cout<<ans;
  for(int i = 0; i < n-2; i++){
    ans += ww[i];
    cout<<" "<<ans;
  }cout<<'\n';

}

int main() {
  int tk = 1, cs = 0;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

  scanf("%d", &tk);
  while (tk--)
    solve();
  return 0;
}
