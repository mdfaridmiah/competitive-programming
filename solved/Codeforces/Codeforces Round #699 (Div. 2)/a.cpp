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
  int x, y;
  scanf("%d%d", &x,&y);
  string s;
  cin>>s;
  int u,d,l,r;
  u = d = l = r = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'U') u++;
    if(s[i] == 'D') d++;
    if(s[i] == 'L') l++;
    if(s[i] == 'R') r++;
  }
  int ok1 = 0, ok2 = 0;
  if(x == 0) ok1 = 1;
  if(x < 0 && l >= abs(x)) ok1 = 1;
  if(x > 0 && r >= abs(x)) ok1 = 1;

  if(y == 0) ok2 = 1;
  if(y < 0 && d >= abs(y)) ok2 = 1;
  if(y > 0 && u >= abs(y)) ok2 = 1;
  if(ok1 && ok2) cout<<"YES\n";
  else cout<<"NO\n";

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
