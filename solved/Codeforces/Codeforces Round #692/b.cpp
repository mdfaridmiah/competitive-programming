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

void solve() {
  ll n;
  scanf("%lld", &n);
  for(ll i = n; i <= 2520 + n; i++){
    ll x = i;
    while(x){
      ll d = x % 10;
      if(d == 0){
        x = x / 10;
        continue;
      }
      if(i % d != 0) break;
      x = x / 10;
    }
    if(x == 0){
        cout<<i<<'\n';
        return;
    }
   }

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
