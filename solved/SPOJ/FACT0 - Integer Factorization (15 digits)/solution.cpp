#include<bits/stdc++.h>
using namespace std;
 
const int mx = 1234567;
const int md = 1e9+7;
const long long inf = 1e100;
const double eps = 1e-6;
const double pi = acos(-1.0);
 
const int M = 31622776 + 5;
typedef long long ll;
 
int ar[mx],xar[mx],uses[mx];
ll arr[mx];
int tab[1000][1000];
string st[1000];
map<int ,int>mpii;
map<int ,char>mpic;
pair<int, int>pr[mx];
 
int ar1[mx],ar2[mx],ar3[mx],ar4[mx];
 
bool is_prime[M];
vector<int> Sieve(int n){
    vector<int>isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 4; i <= n; i = i+2) isPrime[i] = false;
    for(int i = 3; i <= n; i = i+2){
        if (isPrime[i] && (ll)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    vector<int>prime;
    for(int i = 2; i <= n; i++){
        if(isPrime[i] == true) prime.push_back(i), is_prime[i] = true;
    }
    return prime;
}
 
vector<int>v[mx];
void div_all(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j = j+i){
            v[j].push_back(i);
        }
    }
}
 
vector<int > prime;
ll sumOfDiv(ll n){
    ll sum = 1;
    for(ll i = 0; (ll)prime[i]*prime[i] <= n; i++){
        ll temp = 1, p = 1;
        while(n % (ll)prime[i] == 0){
            n = n / (ll)prime[i];
            p = p * (ll)prime[i];
            temp += p;
        }
        sum = sum * temp;
    }if(n != 1) sum *= (n + 1);
    return sum;
}
 
vector<pair<ll,ll> > factor(ll n){
        vector<pair<ll,ll> > fac;
//        if(is_prime[n] == true && n < M ){
//            fac.push_back({n,1});
//            return fac;
//        }
        for(int i = 0; (ll)prime[i]* prime[i] <= n; i++){
            ll cnt = 0;
            while(n % prime[i] == 0){
                n = n / prime[i];
                cnt++;
            }
            if(cnt>0) fac.push_back({(ll)prime[i], cnt});
        }
        if(n != 1)fac.push_back({n,1});
        return fac;
    }
 
map<int,int>mp;
 
int main(){
    int tk = 1,n,m;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);
    ll x,y,z;
//    scanf("%d",&tk);
    ll a, b;
    prime = Sieve(M);
    while(scanf("%lld",&a)==1 && a > 0){
        if(a==1){
            printf("1^1\n");
            continue;
        }
        vector<pair<ll, ll>> res = factor(a);
//        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++){
            printf("%lld^%lld ",res[i].first,res[i].second);
        }printf("\n");
 
    }
 
    return 0;
}
 