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

int x[mx], y [mx];

void solve() {
  int n, m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", x + i, y + i);
  }
  int cnt = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int dy = y[j] - y[i];
      int dx = x[j] - x[i];
      if(abs(dy) <= abs(dx))  cnt++;
    }
  }

  cout<<cnt<<'\n';
}

int main() {
  int tk = 1, cs = 0;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

//  scanf("%d", &tk);
  while (tk--)
    solve();
  return 0;
}
