#include<bits/stdc++.h>
using namespace std;
const int mx =  1234567;
const int md =  1e9+7;
typedef long long  ll;
vector<ll> prime;
vector<ll> pre;
 
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
 
void  fac( ll n){
   for(int i=5; i<5000; i++){
    int c = 0;
    for (int j=0; j < prime.size(); j++){
        ll p = prime[j];
        ll re  = 0;
       if(i%p == 0)c++;
       if(c >=3){
        pre.push_back(i);
        break;
       }
 
    }
 
}
}
 
int main()
{
    int tk,a,b;
    long long re=0;
    scanf("%d",&tk);
    sieve(5000);
    fac(5000);
    while(tk--){
      scanf("%d",&a);
          printf("%d\n",pre[a-1]);
 
    }
 
    return 0;
} 