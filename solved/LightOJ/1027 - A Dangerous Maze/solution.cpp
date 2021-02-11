#include<bits/stdc++.h>
using namespace  std;

const int mx = 1234567;
int ar[mx],ar1[mx];
vector<int>prime;

void sieve(){
   int n = 1000000;
   int sq = sqrt(n)+1;
   for(int i = 4; i <= n; i+=2) ar1[i] = 1;
   for(int i = 3; i < sq; i++){
    if(ar1[i] == 0){
      for(int j = 2*i; j <= n; j+=i){
        ar1[j] = 1;
      }
    }
   }
   for(int i = 2; i <= n; i++){
    if(ar1[i] == 0){
           // cout<<i<<endl;
            prime.push_back(i);
     }
   }
}

int  main ()  {
    int  tk,cs=0;
    sieve();
    //for(int j = 0; j < 5; j++)cout<<prime[j]<<'\n';
    scanf ("%d",&tk);
    while(tk--){
        int  n,flg = 0;
        scanf ("%d",&n);
        for(int i =0; i < n; i++){
            scanf("%d",ar + i);
            if(ar[i]>0) flg = 1;
        }
        if(flg == 0){
            printf("Case% d: inf\n",++cs);
            continue;
        }
         int tm = n,t = 0,res = 0;;
         for(int i =0; i < n; i++){
            if(ar[i]>0){
                res += ar[i];
                continue;
            }
            t++;
            res += ar[i]*-1;
         }
         tm -= t;
         int p = prime[0],index=0;  
         int go = 100;
         while(go--){
            while(res%p==0 && tm%p==0){
                res /= p,tm/=p;
            }
            p = prime[++index];
         }
        printf("Case %d: %d/%d\n" ,++cs, res,tm);
    }
    return 0;
}
