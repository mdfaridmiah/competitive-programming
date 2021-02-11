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

int dr4[4] = { -1, +1, +0, +0}; //UDLR
int dc4[4] = { +0, +0, -1, +1};

int ar[mx], xar[mx], uses[mx];
ll arr[mx];

void solve() {
  int n, m;
  scanf("%d%d", &n,&m);
  vector<int>c(n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", ar + i);
  }
  sort(c.rbegin(), c.rend());
  ll ans = 0;
  int j = 0;
  for(int i = 0; i < n; i++){
      if(j < c[i]){
        ans += ar[j];
        j++;
      }else{
        ans += ar[ c[i] - 1 ] ;
      }
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
