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

int ar2[mx];

bool cmp(int a, int b){
  return a > b;
}

void solve() {
  int n, m;
  scanf("%d%d", &n,&m);
  ll v1= 0, v2 = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", ar + i);
    v1 += ar[i];
  }
  sort(ar, ar + n);
  for(int i = 0 ; i < m; i++){
    scanf("%d", ar2 + i);
    v2 += ar2[i];
  }
  sort(ar2, ar2 + m, cmp);
  int cnt = 0;
  for(int i = 0; i < min(n,m); i++){
    if(v1 > v2) break;
    v1 += ar2[i] - ar[i];
    v2 += ar[i] - ar2[i];
    cnt++;
  }
  if(v1 <= v2) cout<<"-1\n";
  else cout<<cnt<<'\n';
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
