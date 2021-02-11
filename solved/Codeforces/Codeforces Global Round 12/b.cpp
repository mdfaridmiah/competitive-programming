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

pair<int,int> pr[1005];
pair<int,int> pr2[1005];
int vis[1005];

bool cmp(set<int> a, set<int> b){
    return a.size() > b.size();
}

int n, k;

void solve() {
    scanf("%d%d", &n,&k);
    fill(vis, vis + n, 0);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d",&x, &y);
        pr[i] = {x,y};
    }
    vector< set<int> > v;
    for(int i = 0; i < n; i++){
        int x = pr[i].fi;
        int y = pr[i].se;
        set<int> a;
        a.insert(i);
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            int x2 = pr[j].fi ,y2 = pr[j].se;
            int d = abs(x-x2) + abs(y-y2);
            if(d > k) continue;
            a.insert(j);
        }
        v.push_back(a);
    }


    sort(v.begin(),v.end(),cmp);
    int ans = 0;
    set<int> t;
    int cnt = 1;
    for(int i = 0; i < v.size(); i++){
            cerr<<"for1>>>\n";
        if(v[1].size() == 0 ) break;
        for(int j = 1; j < v.size(); j++){
            if(v[j].size() == 0) break;
            cerr<<"for2>>>\n";
            for (auto it=v[0].begin(); it!=v[0].end(); ++it){
                v[j].erase(*it);
            }
        }

        sort(v.begin(),v.end(),cmp);
        int flg = 0;
        set<int> b = v[0];
        for (auto it = v[1].begin(); it!=v[1].end(); ++it){
            b.insert(*it);
            v[1].erase(*it);
            flg = 1;
        }
        sort(v.begin(),v.end(),cmp);

        if(flg){
            cnt++;
            v[0] = b;
        }


    }
    cout<<cnt<<endl;




//    set<int> a, b;
//    a.insert(1);
//    a.insert(3);
//    a.insert(2);
//
//    b.insert(4);
//    b.insert(3);
//    b.insert(2);
//
//   for (auto it=b.begin(); it!=b.end(); ++it)
//       a.erase(*it);
//
//    for (auto it=a.begin(); it!=a.end(); ++it)
//        cerr << ' ' << *it;
//    cerr<<'\n';

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
