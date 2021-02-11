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
  ll two = 0, one = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", ar + i);
    if(ar[i] % 2 == 0) two+=2;
    else one++;
  }
  two = two / 2;
  if(two% 2 == 1){
    one -= 2;
    if(one >= 0 && one % 2 == 0){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }else{
    if(one%2 == 0){
      cout<<"YES\n";
    }else cout<<"NO\n";
  }
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
