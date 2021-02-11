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
  int a, b, c;
  int d1 = 0, d2 = 0;
  scanf("%d%d", &a,&b);
  while(a > 0){
    d1 += a % 10;
    a = a / 10;
  }
  while(b > 0){
    d2 += b % 10;
    b = b / 10;
  }
  cout<<max(d1, d2)<<'\n';

}

int main() {
  int tk = 1;
//  freopen("in.txt","r", stdin);
//  freopen("out.txt","w", stdout);
//  scanf("%d", &tk);
  while (tk--)
    solve();
  return 0;
}
