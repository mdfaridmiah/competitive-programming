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
  ll x;
  scanf("%d %lld", &n,&x);
  ll a1 = 0, a2 = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lld", arr + i);
    a1 += ((arr[i] + x - 1) / x);
    a2 += arr[i];
  }

  cout<<(a2+x-1)/x<< " "<<a1<<'\n';
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
