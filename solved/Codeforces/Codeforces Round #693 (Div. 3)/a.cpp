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
  ll w, h, n;
  scanf("%lld%lld%lld",&w,&h,&n);
  ll ans = 1;

  ll cnt = 0;
  ll p = 2;
  while(w % 2 == 0){
    w = w / 2;
    cnt= p;
    p = 2*p;
  }
  while(h % 2 == 0){
   h = h / 2;
   cnt= p;
   p = 2*p;
  }
  ans = max(ans, cnt);
  if(n <= ans) cout<<"YES\n";
  else cout<<"NO\n";

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
