#include<bits/stdc++.h>
using namespace std;

const int mx = 123456;
const int mod = 1e9 + 7;
const double esp = 1e-7;
const long long  inf = 1e9;
const double pi = acos(-1.0);

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define len(v) ((int)v.size())

void error(){printf("value error...!\n"); exit(1);}
void ck(){cerr<<"#";}

bool ask[mx];
int ar[mx],xar[mx];
ll arr[mx];

ll gcd(ll a, ll b){
    if(a==0)return b;
    if(b==0)return a;
    while(b%a!=0) {
        ll temp = a;
        a = b%a;
        b = temp;
    }
return a;
}
ll lcm(ll a, ll b){
     return (a*b)/gcd(a, b);
}
int bigMod(int a,int b){
     int res = 1 , x = a % mod;
     while(b){
        if(b & 1) res = (res * x)%mod;
        x = (x * x)%mod;
        b >>= 1;
        }
    return res;
}
int invMod(int x){
    return bigMod(x, mod - 2);
}
int extendedGCD(int a, int b){ }
bool isPower(int x, int y) {    //X^p = Y
    int p = 0.5+(log10(y) / log10(x));
    return (pow(x,p) == y);
}


int main(){
    int tk=1,n,m,cs=0,res=0;
    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);

     scanf("%d",&tk);
     while(tk--){
        ll x,y,ans=0;
        scanf("%lld%d",&x,&n);
        for(int i = 0; i < n; i++){
            scanf("%lld",arr + i);
        }

        for(int i = 1; i < (1<<n); i++){
            for(int j = 0; j < n; j++){
                ask[j] = 0;
            }
            int d = 0;
            for(int j = 0; j < n; j++){
                if(i & (1<<j)){
                    d++;
                    ask[j] = 1;
                }
            }
            ll p = 1LL;
            if(d&1==1){
                for(int k = 0; k < n; k++){
                    if(ask[k] == 1){
                        p = lcm(p,arr[k]);
                    }
                }
                ans += (x/p);
            }else if(d%2==0&&d>0){
                 for(int k = 0; k < n; k++){
                    if(ask[k] == 1){
                        p = lcm(p,arr[k]);
                    }
                }
                ans -= (x/p);
            }
        }
         ck();cerr<<ans<<endl;
         printf("Case %d: %lld\n",++cs,x-ans);

    // cerr << "time = " << clock() << " ms" << endl;
     }

return 0;
}
