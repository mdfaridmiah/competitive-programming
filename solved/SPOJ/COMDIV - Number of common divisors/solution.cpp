#include<bits/stdc++.h>
using namespace std;
 
const int mx = 1234567;
const int md = 1e9+7;
const long long inf = 1e100;
const double eps = 1e-6;
const double pi = acos(-1.0);
 
typedef long long ll;
 
int ar[mx],xar[mx],uses[mx];
ll arr[mx];
int tab[1000][1000];
string st[1000];
map<int ,int>mpii;
map<int ,char>mpic;
pair<int, int>pr[mx];
 
int ar1[mx],ar2[mx],ar3[mx],ar4[mx];
 
bool is_prime[mx];
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
vector<int>prime;
 
int divCnt(int n){
    int cnt = 0;
    int gcd = n;
    int ans = 1;
    for(int i = 0; prime[i] * prime[i] <= gcd; i++){
        while(gcd % prime[i] == 0){
            gcd = gcd / prime[i];
            cnt++;
        }
        ans = ans * (cnt + 1);
        cnt = 0;
    }
    if(gcd != 1){
        ans = ans * 2;
    }
    return ans;
}
 
vector<int>v[mx];
void div_all(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j = j+i){
            v[j].push_back(i);
        }
    }
}
 
map<int,int>mp;
 
int store[mx];
 
int main(){
    int tk = 1,n,m;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);
    ll x,y,z;
    prime = Sieve(1000000+5);
//    for(int i  =0; i <= 100; i++){
//        cerr<<prime[i]<<" ";
//    }cerr<<endl;
    scanf("%d",&tk);
    int a, b;
//    div_all(1000000);
//    TLE
    while(tk--){
        scanf("%d%d",&a,&b);
 
//        for(int i = 1; i <= 20; i++){
//            cout<<i<<"=>";
//            for(int j = 0; j < v[i].size(); j++){
//                cout<<v[i][j]<<" ";
//            }cout<<endl;
//        }
//        for(int i = 0; i < v[a].size(); i++){
//            mp[v[a][i]]++;
//        }
//        for(int i = 0; i < v[b].size(); i++){
//            mp[v[b][i]]++;
//            if(mp[v[b][i]] > 1){
//                cnt++;
//            }
//        }
        int g = __gcd(a,b);
        if(g == 1){
            printf("1\n");
            continue;
        }
 
//        int ans = 1;
//        for(int i = 0 ;i <= 78500 && prime[i] < gcd  && gcd; i++){
//            int count = 0;
//            while(gcd%prime[i] == 0){
//                count++;
//                gcd/=prime[i];
//            }
//            ans *= (count + 1);
//        }
//        if(gcd > 1)
//        ans *= 2;
//        cout<<ans<<endl;
        int cnt = 0;
        cnt = divCnt(g);
       printf("%d\n",cnt);
    }
 
    return 0;
}