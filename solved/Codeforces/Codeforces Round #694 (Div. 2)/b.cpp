#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define se second

const int mx = 1234567;
const int md = 1e9 + 7;
const int inf = 1e10;
const double eps = 1e-6;
const double pi = acos(-1.0);

typedef long long ll;

int dr4[4] = { -1, +1, +0, +0}; //UDLR
int dc4[4] = { +0, +0, -1, +1};

int ar[mx], xar[mx], uses[mx];
ll arr[mx];

pair<int, int> a[mx];

bool cmp(pair<int, int>a, pair<int, int>b){
  if(a.fi == b.fi) return a.se > b.se;
  return a.fi < b.fi;
}

void solve() {
  int n, m;
  ll x;
  scanf("%d %lld", &n, &x);
  for (int i = 0; i < n; i++) {
    scanf("%d", ar + i);
  }
  a[0] = {-1,-1};
  for(int i = 0; i < n; i++){
      int cnt = 0;
      int v = ar[i];
      while(v % x == 0){
         v = v / x;
         cnt++;
      }
      a[i] = {cnt, i};
      xar[i] = cnt;
  }
  sort(a, a + n, cmp);
  ll ans = 0;
  bool flg = 1;
  for(int i = 0; i < n && a[0].fi != 0; i++){
    int cnt = xar[i];
    if(cnt == a[0].fi) flg = 0;
    if(flg == 1){
      cnt = a[0].fi + 1;
    }else cnt = a[0].fi;
    ll p = 1;
    ans += ar[i];
    while(cnt > 0 && ar[i] % x == 0){
      ar[i] = ar[i] / x;
      p = p * x;
      ans += p*ar[i];
      cnt--;
    }
  }

  flg = 1;
  for(int i = 0; i < n && a[0].fi == 0; i++){
    if(xar[i] == 0) flg = 0;
    if(flg == 1 && ar[i] % x == 0) ans += ar[i]*2;
    else ans += ar[i];
  }
  cout<<ans<<'\n';

 }

int main() {
  int tk = 1;
//  freopen("in.txt","r", stdin);
//  freopen("out.txt","w", stdout);

  scanf("%d", &tk);
  while (tk--)
    solve();
  return 0;
}
