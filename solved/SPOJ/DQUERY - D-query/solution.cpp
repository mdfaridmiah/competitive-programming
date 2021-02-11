#include<bits/stdc++.h>
using namespace std;
 
/// read the question correctly (is y a vowel?)
/// look out for SPECIAL CASES (n=1?) and overflow (ll vs int?)
 
const int mx = 1234567;
const double esp = 1e-6;
const int md = 1e9+7;
typedef long long ll;
 
int ar[mx],xar[mx],uses[mx];
ll arr[mx];
int tab[1000][1000];
string st[1000];
map<int ,int>mpii;
map<int ,char>mpic;
map<char ,int>mpci;
pair<int,int>pr[mx];
 
const int maxn = 200002;
int K, ans[maxn], a[maxn], sum;
set<int>s;
int res = 0;
int f[mx];
 
struct Query{
    int index, L, R;
}query[maxn];
 
bool cmp(Query l,Query r){
    int b1 = l.L/K;
    int b2 = r.L/K;
    if(b1==b2)
        return l.R < r.R;
    return b1 < b2;
}
    
void add(int index){
    f[a[index]]++;
    if(f[a[index]] == 1) res++;
}
 
void del(int index){
    f[a[index]]--;
    if(f[a[index]]==0) res--;
}
 
int main(){
    int tk = 1,n,m;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);
    while(scanf("%d",&n)==1){
        K = sqrt(n)+1;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        int q;
        scanf("%d",&q);
        for(int i = 1; i <= q; i++){
            int l,r;
            scanf("%d%d",&l,&r);
            query[i].L = l-1;
            query[i].R = r-1;
            query[i].index = i;
        }
        sort(query, query+q,cmp);
        int L=0, R=-1;
        res = 0;
        memset(f,0,sizeof(f));
        for(int i = 1; i <= q; i++){
            while(R<query[i].R) add(++R);
            while(L<query[i].L) del(L++);
            while(R>query[i].R) del(R--);
            while(L>query[i].L) add(--L);
            ans[query[i].index] = res;
        }
        for(int i=1;i<=q;i++){
            printf("%d\n",ans[i]);
        }
 
    }
 
    return 0;
}