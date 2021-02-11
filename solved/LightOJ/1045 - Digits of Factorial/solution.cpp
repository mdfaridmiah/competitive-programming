#include <bits/stdc++.h>
using namespace std;

#define MX 262500
#define MOD 1000000007
typedef long long  LL;
const double  PI=acos(-1.0);

template <typename T>
inline T myMax(T x, T y)
{
    return (x > y)? x: y;
}

double ar[1000010];

int main()
{
    //freopen("iin.txt", "r", stdin);
    //  freopen("1.out", "w", stdout);
    // cout << myMax<double>(3.0, 7.0) << endl;
    int tk,c=0;
    for(int i=1; i<=1000005; i++)
        ar[i]=log((double)i)+ar[i-1];
    scanf("%d",&tk);
    while(tk--)
    {
        long long n, base;
        scanf("%lld %lld",&n,&base);
        double ans=0;
        ans=ar[n];
        ans/=log((double)base);
        ans=ceil(ans);
        //long long x=ans;
        c++;
        if(n>0)
            printf("Case %d: %lld\n",c,(long long)ans);
        else  printf("Case %d: 1\n",c);

    }
    return 0;
}
