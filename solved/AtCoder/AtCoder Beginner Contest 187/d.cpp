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

bool cmp(ll a, ll b){
  return a > b;
}

void solve() {
  int n, m;
  scanf("%d", &n);
  ll v1 = 0;
  ll a, b;
  for (int i = 0; i < n; i++) {
    scanf("%lld %lld", &a, &b);
    v1 -= a;
    arr[i] = a+a+b;
  }
  sort(arr, arr + n, cmp);
  for(int i = 0; i < n; i++){
    v1 += arr[i];
    if(v1 > 0){
      cout<<i+1<<'\n';
      return;
    }
  }

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

/*
1 4
3 1
2 0
*/
