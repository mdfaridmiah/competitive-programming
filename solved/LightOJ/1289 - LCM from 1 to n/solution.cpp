#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bitset<100000100> prime;
int ar[6000000];
unsigned dp[6000000];
int j = 1;

void sieve(int n){
   // memset(prime, true, sizeof(prime));
   for(int i = 4;i<=n; i+=2) prime[i] = true;
    for (int p=3; p*p<=n; p++) {
        if (prime[p] == false) {
         for (int i=p*p; i<=n; i += p)
                prime[i] = true;
        }
    }
    ar[0]=2;
     for (int p=3; p<=n; p+=2)
       if (prime[p]==false){
            ar[j++]= p;
       }
}


int main(){
    int n,a;
    unsigned res= 1;
    int tk,cs=0;
    sieve(100000000+100);

    //cout<<prime[10]<<endl;
    ll g = (ll) 1 << 32;
    //cout<<g<<endl;
    //cout<<ar[j-1]<<endl; //10^8 + 81;
    dp[0] = 2;
    for (int i = 1; i < j; i++) {
        dp[i] = (dp[i - 1]) * (ar[i]) ;
    }

    scanf("%d",&tk);
    while(tk--){
        res = 1;
        scanf("%d",&a);
        int i = 0;
        while(ar[i]*ar[i] <= a){
            int t = a;
            int cnt = 0;
            t = t/ar[i];
            while(t>= ar[i]) {
                t = t/ar[i];
                res= res*ar[i];
            }
            i++;
        }
        //cout<<"#"<<res<<endl;

        int ind = lower_bound(ar, ar + j, a) - ar;
        if(prime[a] == true) ind--;
       // if(ind<0) ind = j-1;
        //cout<<"#"<<ind<<" " <<dp[ind]<<endl;
        res = (res * dp[ind]) ;

        //printf("Case %d: %u\n",++cs,res);
        clog<<"Case "<<cs<<"     : "<<res<<endl;

        cout<<"Case "<<++cs<<": "<<res<<endl;
        cerr<<"Case "<<cs<<"     : "<<res<<endl;
    }


    return 0;
}
