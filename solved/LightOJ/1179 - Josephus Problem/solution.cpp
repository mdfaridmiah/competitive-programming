using namespace std;
#include<bits/stdc++.h>

int josephusIteration(int n, int k){
    /* (1+3)%1=0
     (0+3)%2=1
     (1+3)%3=1
     (1+3)%4=0
     (0+3)%5=3
     print(ans) n!=1;
     n==1;print (1); */

    int result = 0;		// when n = 1
    for(int i = 2; i <= n; i++)
    {
        result = (result + k) % i;
    }
    return result+1;
}

int main(){
    int n,k,tk,cs=0,res;
    scanf("%d",&tk);
    while(tk--)
    {
        cs++;
        cin>>n>>k;
        res=josephusIteration(n,k);
        printf("Case %d: %d\n",cs,res);
    }
    return 0;
}
