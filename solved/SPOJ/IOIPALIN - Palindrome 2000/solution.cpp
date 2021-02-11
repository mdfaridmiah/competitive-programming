#include<bits/stdc++.h>
using namespace std;
const int mx = 1234567;
char ch[mx];
int n,m;
char s1[5004],s2[5004];
int dp[3][5004];
int LCS(){
	int i,j,k;
	int b=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(s1[i]==s2[j])
				dp[2][j]=dp[1][j-1]+1;
			else
				dp[2][j]=max(dp[1][j],dp[2][j-1]);
		}
		for(k=1;k<=n;k++)
			dp[1][k]=dp[2][k];
	}
 
	return dp[2][m];
}
string s;
int main()
{
	int i,j,b,c,d;
	scanf("%d",&n);
	scanf("%s",ch);
	m=n;
	for(i=1;i<=n;i++)
		s1[i]=ch[i-1];
	for(i=1;i<=n;i++)
		s2[i]=s1[n-i+1];
	c=LCS();
	printf("%d",n-c);
	return 0;
}
 
Source code | Plain text | Copy to submit
ads via Carbon
Limited time offer: Get 10 free Adobe Stock images.
ADS VIA CARBON

About | Tutorial | Tools | Clusters | Credits | API | Widgets

Legal: Terms of Service | Privacy Policy | GDPR Info

 RSS 
