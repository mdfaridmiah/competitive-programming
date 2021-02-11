#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

long long ar[10005],num[10005],f[10005],n=10005,c;
vector<long long>prime;


void sive()
{
    long long p,i;
    memset(ar,1, sizeof(ar));
    for (  p=2; p*p<=n; p++)
    {
        if (ar[p] == 1)
        {
            for (i=p*2; i<=n; i=i+ p)
                ar[i] = 0;
        }
    }
    prime.push_back(2);
    for(i=3; i<=n; i=i+2)
    {
        if(ar[i])prime.push_back(i);
    }
}
void fact(long long no)
{
    long long i=0,cnt=0,flg,mul,k;
    for(i=0; prime[i]*prime[i]<=no; i++)
    {
        flg=0;
        cnt=0;
        mul=1;
        while(no%prime[i]==0)
        {
            no=no/prime[i];
            cnt++;
            flg=1;
            mul*=prime[i];
        }
        //mul=pow(prime[i],cnt);
        if(flg)
        {
            f[i]=max(f[i],mul);
            c=max(i,c);
        }

    }
    if(no>1)
    {
        k=lower_bound(prime.begin(), prime.end(),no)-prime.begin();
        f[k]=max(f[k],no);
        c=max(k,c);
    }
}
string bigmul(string a,long long b)
{
    long long carry=0,i,l;
    string habijabi="";
    l=a.size()-1;
    for(i=l; i>=0; i--)
    {
        carry += (a[i] - 48) * b;
        habijabi+= ( carry % 10 + 48 );
        carry /= 10;
    }
    while(carry)
    {
        habijabi += ( carry % 10 + 48 );
        carry /= 10;
    }
    return habijabi;

}

int main ()
{
    long long tk,i,j,a,no,l,cc=0;
    string lcm,tlcm;
    sive();
    scanf("%lld",&tk);
    while(tk--)
    {
        cc++;
        c=0;
        lcm="1";
        tlcm="";
        memset(f,0,sizeof(f));
        scanf("%lld",&a);
        for(i=0; i<a; i++)
        {
            scanf("%lld",&no);
            fact(no);
        }
        for(i=0; i<=c; i++)
        {
            if(f[i])
            {
               // printf("#%lld\n",f[i]);
                lcm=bigmul(lcm,f[i]);
                l=lcm.size();
                tlcm=lcm;
                lcm="";
                for(j=l-1; j>=0; j--)
                {
                    lcm+=tlcm[j];
                }

            }
        }


        printf("Case %lld: ",cc);
        cout<<lcm<<endl;
    }


    return 0;
}
