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

void KMP(string text, string pattern){
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
            }
        }else{
            if(j!=0){
                j = ar[j-1];
            }else{
                i++;
            }
        }
    }
  //cout<<"98\n";
}

int main(){

    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);
    int tk,cs=0,n;
    string st1,st2;
    scanf("%d",&tk);
    while(tk--){
        cin>>st1>>st2;
        memset(ans,-1,sizeof(ans));
        //cout<<st1<<" "<<st2<<endl;
        KMP(st1,st2);
//        if(ans[0] == -1){
//            printf("No matching\n");
//            continue;
//        }
        //cout<<ans[0]<<endl;
        int cnt = 0;
        for(int i=0; i < 1000000; i++){
            if(ans[i]==-1)break;
            cnt++;
        }
        printf("Case %d: %d\n",++cs,cnt);

    }
  return 0;

}

