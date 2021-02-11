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

int n;

bool fit(int i){
  if(i == 0 || i == n - 1) return false;
  if(ar[i-1] < ar[i] && ar[i] > ar[i+1] ) return true;
  if(ar[i-1] > ar[i] && ar[i] < ar[i+1] ) return true;
  return false;
}

void solve() {
  int m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", ar + i);
  }
  int cnt = 0;
  for(int i = 1; i < n - 1; i++){
    if(fit(i))cnt++;
  }

  int dec = 1;
  for(int i = 1; i < n-1; i++){
    int c = fit(i) + fit(i - 1) + fit(i + 1);
    int tem = ar[i];
    ar[i] = ar[i + 1];
    int v = c - (fit(i) + fit(i - 1) + fit(i + 1));
    dec = max(dec , v);
    ar[i] = ar[i - 1];
    v = c - (fit(i) + fit(i - 1) + fit(i + 1));
    dec = max(dec , v);
    ar[i] = tem;
  }
  cnt -= dec;
  cout<<max(cnt,0)<<'\n';
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
