#include<bits/stdc++.h>
using namespace std;
 

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
int ind,eind;
string s1 ="";
 
void KMP(string text, string pattern){
    prefixFunc(pattern);
    int i,j,flg,k;
    i=j=k=flg=0;
    while(i < text.size() && j < pattern.size()){
//        cout<<"top:"<<i<<endl;
        if(text[i] == pattern[j]){
            i++;
            j++;
 
 
        }else{
            if(j!=0){
                j = ar[j-1];
            }else{
                i++;
            }
 
 
        }
    }
    ind = j;
 }
 
int main(){
 
    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);
    string st1,st2;
    string ss="GG",sss="12345";
 
    while(cin>>st1){
        memset(ans,-1,sizeof(ans));
        st2 = st1;
        reverse(st1.begin(),st1.end());
        KMP(st2,st1);
//        cout<<ind<<endl;
        for(int i = ind; i < st1.size(); i++){
            st2+=st1[i];
        }
        cout<<st2<<endl;
    }
  return 0;
 
}