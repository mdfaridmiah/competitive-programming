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
  int n, k;
  scanf("%d%d", &n,&k);
  for(int i = 0; i < n; i++){
    scanf("%d", ar + i);
  }
  int p = 0;
  for(int i = 0; i <= 5050; i++){
    for(int j = 0; j < n - 1; j++){
      if(ar[j] >= ar[j + 1]) continue;
      ar[j]++;
      xar[p++] = j+1;
      break;
    }
  }

//  cerr<<"#"<<p<<endl;
//  for(int i = 0; i < p; i++){
//    cerr<<" "<<xar[i];
//  }cerr<<endl;

  if(p < k) cout<<"-1\n";
  else cout<<xar[k-1]<<'\n';

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
