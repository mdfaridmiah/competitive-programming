using namespace std;
#include<bits/stdc++.h>
#define ll long long

int main()
{
    int tk, n,cs=0;
    char ch[1000];
    scanf("%d",&tk);
    while(tk--)
    {
        cs++;
        scanf("%d%s",&n,&ch);
        //we have to need n,n-1,n-2 and just check ;
        if(ch[0]=='A'){
            if( (n-1)%3==0)printf("Case %d: Bob\n",cs);
            else printf("Case %d: Alice\n",cs);
          }
        else{
             if(n%3==0)printf("Case %d: Alice\n",cs);
             else printf("Case %d: Bob\n",cs);
        }
    }
    return 0;
}
