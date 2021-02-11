#include<stdio.h>

double harmonic(int n){
    double h=0.0;
    int i;
    for(i=1; i<=n; i++)
    {
        h+=1/(double)i;
        //printf("#%lf ",h);
    }
    return h;
}

int main(){
    int tk,n,c=0;
    double res;
    scanf("%d",&tk);
    while(tk--){
        c++;
        scanf("%d",&n);
        res=harmonic(n);
        //printf("#%lf",res);
        res=res*n;
        printf("Case %d: %lf\n",c,res);

    }
  return 0;
}
