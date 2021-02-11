//CODEIT02 - PICK UP DROP ESCAPE

#include<bits/stdc++.h>
using namespace std;

const int mx = 1234567;
const double esp = 1e-6;
const int md = 1e9+7;
typedef long long ll;

int ar[mx],val[mx],w[mx];
int n;
int cnt  = 0;
int vis[1005][50];
int dp(int i,int bag){
    if(i >= n) return 0;
//    if(bag - w[i] < 0) return 0;
    if(vis[i][bag] != -1) return vis[i][bag];

    int x1, x2;
    x1=x2=0;
    if(bag - w[i] >= 0) x1 = val[i] + dp(i + 1, bag - w[i]);
    x2 = dp(i + 1, bag);
    vis[i][bag] = max(x1, x2);
    return vis[i][bag];
}


int main(){

    int tk,m,cs=1;
//    freopen("in.txt","r", stdin);
//    freopen("out.txt","w", stdout);
    scanf("%d",&tk);
    while(tk--){
        memset(vis, -1, sizeof(vis));
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d%d", val + i, w + i);
        }
        scanf("%d",&m);
        int tot = 0;
        while(m--){
            int x;
            scanf("%d",&x);
            tot += dp(0, x);
        }
        cout<<tot<<endl;
    }
 return 0;

}

/*
Input:
2
3
72 17
44 23
31 24
1
26

6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26

Output:
72
514

*/
