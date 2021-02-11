#include<bits/stdc++.h>
using namespace std;
 
/// read the question correctly (is y a vowel?)
/// look out for SPECIAL CASES (n=1?) and overflow (ll vs int?)
 
const int mx = 1234567;
int ar[mx],ans[mx];
 
void prefixFunc(string s){
    int index ,i,sz;
    sz = s.size();
    index=0,i=1;
    while(i<sz){
        if(s[i] == s[index]){
           ar[i] = index + 1;
           index++;i++;
        }else{
            if(index != 0){
                index = ar[index-1];
            }else{
                ar[i] = 0;
                i++;
            }
        }
    }
}
 
void KMP(string pattern){
    prefixFunc(pattern);
}
 
int main(){
 
//  freopen("in.txt","r", stdin);
//  freopen("out.txt","w", stdout);
    int cs = 0,tk;
    string st1;
    scanf("%d",&tk);
    while(tk--){
        int len;
        scanf("%d",&len);
        cin>>st1;
        memset(ans,-1,sizeof(ans));
        memset(ar,0,sizeof(ar));
       // cout<<st1<<" "<<endl;
        KMP(st1);
//        for(int i=0; i < st1.size(); i++){
//            printf("#%d ",ar[i]);
//        }
//        printf("\n\n");
        printf("Test case #%d\n",++cs);
        int j,k;
        j=k=0;
        for(int i=1; i < len; i++){
            j = ar[i];
            if(j > 0 && (i+1) % (i+1-j)==0){
                printf("%d %d\n",i+1,(i+1) / (i+1-j));
            }
        }
    }
 
  return 0;
}
