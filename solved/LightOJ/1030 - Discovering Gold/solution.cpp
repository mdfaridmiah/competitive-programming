#include<bits/stdc++.h>
using namespace std;

const int mx =  12345;
const int md =  1e9+7;
int ar[mx];
double prob[mx];
double res[mx];

int main(){
    int tk,cs=0,n;
    scanf("%d",&tk);
    while(tk--){
       scanf("%d",&n);
       for(int i = 1; i  <= n; i++){
        scanf("%d",&ar[i]);
       }
       double ans = 0.0;
    memset(prob,0,sizeof(prob));
       prob[1] = 1.0;
       for(int i = 1; i <= n; i++){
            for(int j  = i + 1; j <= min(n, i + 6);  j++){
                prob[j]  +=  (prob[i] / (min(n, i + 6) - i) );
            }
            cerr<<"#"<<prob[i]<<endl;

           ans += (ar[i] *prob[i]) ;
       }
       printf("Case %d: %.10lf\n",++cs,ans);
    }
    return 0;
}
