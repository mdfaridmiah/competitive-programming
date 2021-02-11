#include<bits/stdc++.h>
using namespace std;
const int mx =  1234567;
const int md =  1e9+7;
typedef long long  ll;
vector<ll> prime;
bool vis[mx];
void sieve(int n){
   memset(vis, 1, sizeof(vis));
    for (int p=2; p*p<=n; p++){
        if (vis[p] == true){
            for (int i=p*2; i<=n; i += p)
                vis[i] = false;
        }
    }
 
 
    for (int p=2; p<=n; p++)
        if (vis[p])
            prime.push_back(p);
}
 
ll  fac( ll n){
     ll result = 1;
    for (int i=0; i < prime.size(); i++){
         ll p = prime[i];
        ll re  = 0;
        while (p <= n){
            re =(re + (n/p))%md;
            p = ( p*prime[i])%md;
        }
 
        result =(result*(re+1))%md;
    }
 
    return result%md;
}
 
int main()
{
    int tk,a,b;
    long long re=0;
    scanf("%d",&tk);
    sieve(50000);
    while(tk--){
      scanf("%d",&a);
          re = fac(a);
          printf("%d\n",re);
    }
 
    return 0;
} 