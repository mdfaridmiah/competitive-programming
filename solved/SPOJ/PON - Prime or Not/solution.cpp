#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
 
ULL mulmod(ULL a, ULL b, ULL c)
{
    ULL x = 0,y = a%c;
    while(b>0)
    {
        if(b&1) x = (x+y)%c;
        y = (y<<1)%c;//y=(y*2)%c;
        b >>= 1;//b=b/2;
    }
    return x;
}
 
ULL pow(ULL a, ULL b, ULL c)
{
    ULL x = 1, y = a;
    while(b>0)
    {
        if(b&1) x = mulmod(x,y,c);//x=x*y;
        y = mulmod(y,y,c);//y=y*y;
        b >>= 1;//b=b/2;
    }
    return x;
}
 
bool miller_rabin(ULL p, int it)
{
    if(p<2) return false;
    if(p==2) return true;
    if((p&1)==0) return false;
    ULL s = p-1;
    while(s%2==0) s >>= 1;
    while(it--)
    {
        ULL a = rand()%(p-1)+1,temp = s;
        ULL mod = pow(a,temp,p);
        if(mod==-1 || mod==1) continue;
        while(temp!=p-1 && mod!=p-1)
        {
            mod = mulmod(mod,mod,p);
            temp <<= 1;
        }
        if(mod!=p-1) return false;
    }
    return true;
}
 
int main()
{
    int T;
    unsigned long long N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%llu",&N);
        if(miller_rabin(N,13))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}