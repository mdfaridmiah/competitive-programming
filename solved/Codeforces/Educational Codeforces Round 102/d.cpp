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

int dr4[4] = { -1, +1, +0, +0 }; //UDLR
int dc4[4] = { +0, +0, -1, +1 };

int ar[mx], xar[mx], uses[mx];
ll arr[mx];

pair<int, int> pre[mx], suf[mx];

void solve() {
  int n, m;
  scanf("%d%d", &n,&m);
  string s;
  cin>>s;

  for(int i = 0; i < n; i++) {
    if(s[i] == '+'){
      pre[i + 1].fi  = 1 + pre[i].fi;
      pre[i + 1].se  = 0 + pre[i].se;
    }else{
      pre[i + 1].fi  = 0 + pre[i].fi;
      pre[i + 1].se  = 1 + pre[i].se;
    }
  }

  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == '+'){
      suf[i].fi  = 1 + suf[i + 1].fi;
      suf[i].se  = 0 + suf[i + 1].se;
    }else{
      suf[i].fi  = 0 + suf[i + 1].fi;
      suf[i].se  = 1 + suf[i + 1].se;
    }
  }

  while(m--){
    int l, r;
    scanf("%d%d",&l, &r);
    int ans = pre[l-1].fi + suf[r].fi + pre[l-1].se + suf[r].se;
    cout<<ans + 1<<'\n';
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
