using namespace std;
#include<bits/stdc++.h>

int main()
{
    long long int i,j,n,tk,l,zkk,m,r;

    cin>>tk;
    for(i=1;i<=tk;i++)
    {
        cin>>n>>m;
        r=0;
        l=0;
        for(j=0;j<n;j++)
        {
            r=(r*10+m)%n;
            l++;
            if(r==0)
            {
                break;
            }
        }
        printf("Case %lld: %lld\n",i,l);

    }
    return 0;
}