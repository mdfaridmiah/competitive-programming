#include<stdio.h>

int main(){
    int tk,i,j,k=0,n,p,q;
    int ar[1000],num;
    scanf("%d",&tk);
   while(tk--){
       k++;
       num=0;
       scanf("%d%d%d",&n,&p,&q);
       for(i=0;i<n;i++){
          scanf("%d",&ar[i]);
        }
       for(j=0;j<n;j++){
            num+=ar[j];
            if(j>=p||num>q)break;
        }
        printf("Case %d: %d\n",k,j);
    }
  return 0;
}
