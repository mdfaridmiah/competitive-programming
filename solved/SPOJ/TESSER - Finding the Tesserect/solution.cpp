#include<bits/stdc++.h>
using namespace std;


const int mx = 1234567;
int ar[mx],ans[mx],ax[mx],ay[mx];
 
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
 
bool KMP(string text, string pattern){
    prefixFunc(pattern);
    int i,j,flg,k;
    i=j=k=flg=0;
    while(i < text.size() && j < pattern.size()){
        if(text[i] == pattern[j]){
            i++;
            j++;
            if(j >= pattern.size()){
                ans[k++] = i - j;
                j =  ar[j-1];
                //j = 0;
                return 1;
            }
        }else{
            if(j!=0){
                j = ar[j-1];
            }else{
                i++;
            }
        }
    }
    return 0;
  //cout<<"98\n";
}
 
int main(){
 
    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);
    int tk,n;
 
    scanf("%d",&tk);
    while(tk--){
        string st1="",st2;
        cin>>n;
        memset(ans,-1,sizeof(ans));
        for(int i = 0; i < n; i++){
            scanf("%d",ax + i);
            if(i!=0){
                if(ax[i]==ax[i-1]){
                    st1+='E';
                    continue;
                }
                if(ax[i] > ax[i-1]){
                    st1+='G';
                    continue;
                }
                if(ax[i] < ax[i-1]){
                    st1+='L';
                    continue;
                }
            }
        }
        cin>>st2;
       // cout<<st1<<" "<<st2<<'\n';
        int cat = KMP(st1,st2);
 
        if(cat == 0){
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
 
  return 0;
 
}