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
  scanf("%d", &n);
  ar[0] = 9;
  ar[1] = 8;
  for (int i = 2; i < n; i++) {
    ar[i] = (ar[i-1] + 1) % 10;
  }
  for(int i = 0; i < n; i++){
    cout<<ar[i];
  }cout<<'\n';

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
