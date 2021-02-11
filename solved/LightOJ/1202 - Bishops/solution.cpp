#include<bits/stdc++.h>

using namespace std;

int main(){
    int r1,c1,r2,c2,tk,cs =0;
     scanf("%d",&tk);
     while(tk--){
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        int r,rr;
        r = (c1-r1);
        rr = (c2-r2);
        int p1,p2;
        p1 = c1+r1;
        p2 = r2+c2;
        if(r%2 == rr%2 || p1%2 == p2%2){
            if(r==rr || p1 == p2)printf("Case %d: 1\n",++cs);

            else printf("Case %d: 2\n",++cs);
        }
        else {
            printf("Case %d: impossible\n",++cs);
        }

     }
  
return 0;
}
