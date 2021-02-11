#include<bits/stdc++.h>
using namespace std;

const int mx = 1234567;
typedef long long ll;

int ar[mx],ans[mx];
int MOD;
pair<int ,int >pr[mx];

ll bigMod(ll a,ll b){ ll res = 1 , x = a % MOD; while(b){ if(b & 1) res = (res * x)%MOD; x = (x * x)%MOD; b >>= 1;} return res;}
ll invMod(ll x){ return bigMod(x, MOD - 2);}

ll gcdExtended(ll a, ll b, ll *x, ll *y){
    if(a == 0){
        *x = 0;*y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
    // Update x and y using results of recursive call
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}

int main(){

//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);

    int tk,cs=0,n,m;
    scanf("%d",&tk);
    while(tk--){
        int p;
        scanf("%d",&p);
        ll ans = 0;
        ll pp = 1;
        for(int i = 0; i < p; i++){
            scanf("%d%d",&n,&m);
            pr[i]= make_pair(m,n);
            pp *= (ll)n;
        }
        ll pp2;
        ll a,b,x,y;
        for(int i = 0; i < p; i++){
            pp2 = pp / pr[i].second;
           // pp2 = pp2 % pr[i].second;
            a = pp2;
            b = pr[i].second;
            x=y=0;
            MOD = b;
            ll g = invMod(a);
            while(g <= 0){g += pr[i].second;}
            x = (g * a) % pp;
            //cout<<"#"<<x<< " "<<pp2<<endl;
            ans += (x*pr[i].first) % pp;
            ans = ans % pp;
        }
        printf("Case %d: %lld\n",++cs,ans);
    }

  return 0;

}


