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
bool cmp(char a, char b){
    return a > b;
}
void solve() {
  int n, m;
  scanf("%d", &n);
  string s, ans = "";
  cin>>s;
  string rs = "bugyrt";
  for(int i = 0; i < n; i++){
    if(s[i] != rs[0] && s[i] != rs[1] && s[i] != rs[2] && s[i] != rs[3] && s[i] != rs[4] && s[i] != rs[5]){
        ans += s[i];
    }
  }
  for(int i = 0; i < 6; i++){
     for(int j = 0; j < n; j++){
        if(s[j] == rs[i]) ans += s[j];
     }
  }
  cout<<ans<<endl;
}

int main() {
  int tk = 1, cs = 0;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

  scanf("%d", &tk);
  while (tk--)
    solve();
  return 0;
}
