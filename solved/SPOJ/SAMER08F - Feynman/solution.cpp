#include<stdio.h>

int main(){
    int n,res;
    while(scanf("%d",&n)==1&&n){
    res=n*(n+1)*(2*n+1)/6;
    printf("%d\n",res);
    }
return 0;
}