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

struct Line{
  ll m, c;
};

void solve() {
  ll n, k, x, y;
  scanf("%lld%lld%lld%lld",&n,&k,&x,&y);
  pair<int, int> pt[4];
  ll l1x = n, l2y = n, l3x = 0, l4y = 0;
  Line line[4];

  line[0].m = 1;
  line[0].c = -x+y;
  pt[1] = {n, y-x};


  line[1].m = -1;
  line[1].c = -pt[1].fi +pt[1].se;
  pt[2] = {}

  line[2].m = 1;
  line[2].c =  -pt[2].fi +pt[2].se;

  line[1].m = -1;
  line[1].c = -pt[3].fi +pt[3].se;




}

int main() {
  int tk = 1;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

  scanf("%d", &tk);
  while (tk--)
    solve();
  return 0;
}
