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

bool cmp(int a, int b){
    return a > b;
}

void solve() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &ar[i]);
  }
  sort(ar, ar + n, cmp);
  ll alice = 0, bob = 0;
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      if(ar[i] % 2 == 0) alice += ar[i];
    }else{
      if(ar[i] % 2 == 1) bob += ar[i];
    }
  }
  if(alice == bob) cout<<"Tie\n";
  else if(alice > bob) cout<<"Alice\n";
  else cout<<"Bob\n";

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
