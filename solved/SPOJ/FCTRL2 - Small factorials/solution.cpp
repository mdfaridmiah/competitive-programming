#include <bits/stdc++.h>
using namespace std;
const  long long md = 1e9 + 7;
//  sum=(1+10*n*n+(16*n*n*n+(26*n))/3);
 
string mul(string a,long long b){
    long long carry=0,i,l;
    string habijabi="";
    l=a.size()-1;
    for(i=l; i>=0; i--){
        carry += (a[i] - 48) * b;
        habijabi+= ( carry % 10 + 48 );
        carry /= 10;
    }
    while(carry){
        habijabi += ( carry % 10 + 48 );
        carry /= 10;
    }
    reverse(habijabi.begin(), habijabi.end() );
    return habijabi;
 
}
 
int main(){
      int tk,n;
      scanf("%d",&tk);
      while(tk--){
         scanf("%d",&n);
         string st = "1";
         long long re = 1;
         for(int i = 0; i < n; i++){
            st = mul(st,re);
            re++;
         }
         cout<<st<<'\n';
 
      }
 
    return 0;
}
 
Source code | Plain text | Copy to submit
ads via Carbon
Limited time offer: Get 10 free Adobe Stock images.
ADS VIA CARBON

About | Tutorial | Tools | Clusters | Credits | API | Widgets

Legal: Terms of Service | Privacy Policy | GDPR Info

 RSS 
