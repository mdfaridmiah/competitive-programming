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

int KMP(string text, string pattern){
    prefixFunc(pattern);
    int i,j,flg,k;
    i=j=k=flg=0;
    int id = 0;
    while(i < text.size() && j < pattern.size()){
        if(text[i] == pattern[j]){
            i++;
            j++;
            if(j >= pattern.size()){

                ans[k++] = i - j;
                j =  ar[j-1];
            }
        }else{
            if(j!=0){
                j = ar[j-1];
            }else{
                i++;
            }
        }
       if(i == pattern.size()-1){
        id = j;
       }
    }
    return id+1;
  //cout<<"98\n";
}

int main(){

    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);
    int tk,cs=0,n;
    string st1,st2;
    scanf("%d",&tk);
    while(tk--){
        cin>>st2;
        st1 = st2;
        reverse(st1.begin(), st1.end());
        //cout<<st2<<" "<<st1<<endl;
        //st2+=st1;
        memset(ans,-1,sizeof(ans));
        //cout<<st1<<" "<<st2<<endl;
       int res =  KMP(st2,st1);
       res = (2*(int)st1.size()) - res;
       printf("Case %d: %d\n",++cs,res);

    }

  return 0;

}
