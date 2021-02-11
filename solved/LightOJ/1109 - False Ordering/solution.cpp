#include<bits/stdc++.h>
using namespace std;

const int  mx = 1234;
map<int,int>mp;
vector<long long > ve;
vector<int>divisor[mx];
int ar[mx],ar1[mx];
pair<int,int>pr[mx];

void dib(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j +=i){
            divisor[j].push_back(i);
        }
    }
}

bool acompare(pair<int,int> a, pair<int,int> b) { if(a.first==b.first)return  a.second > b.second; return a.first < b.first;}

int main(){
    // freopen("in.txt","r", stdin);
    // freopen("out.txt","w", stdout);
    int tk=1,n,cs=0,x,h,m;
    dib(1000);
    for(int i = 1; i <= 1000; i++){
        pr[i-1] = make_pair(divisor[i].size(),i);
    }

    sort(pr , pr + 1000,acompare);
    for(int i = 0; i <= 10; i++){
       //cout<< pr[i].second<<" "<<pr[i].first<<endl;
    }
    scanf("%d",&tk);
    while(tk--){
        scanf("%d",&n);
        printf("Case %d: %d\n",++cs,pr[n-1].second);

    }

   return 0;
}
