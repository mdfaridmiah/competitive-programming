#include"bits/stdc++.h"
using namespace std;
 
#define mod 1000000007
long long  a[1000008];
 
int main(){	
	a[0]=0;
	a[1]=0;
	a[2]=1;
	a[3]=1;
	for(int i=4;i<1000008;i++){
		a[i]=a[i-2]+a[i-3];
		a[i]%=mod;
	}
	long long  tk;
	scanf("%lld",&tk);
	while(tk--){
		long long  n;
		scanf("%lld",&n);
		printf("%lld\n",a[n]);
	}
  return 0;
} 