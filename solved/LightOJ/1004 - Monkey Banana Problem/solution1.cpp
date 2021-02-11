#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

long long data[200][200],res[200][200];
int main()
{
    long long tk,co,ro,i,j,m,f,k,t,c=0;;
    scanf("%lld",&tk);
    while(tk--)
    {
        m=1;
        f=1;
        c++;
        memset(data,0,sizeof(data));
        memset(res,0,sizeof(res));
        scanf("%lld",&co);
        ro=2*co-1;
        for(i=0; i<ro; i++)
        {
            for(j=0; j<min(m,co); j++)
            {
                //printf("#");
                scanf("%lld",&data[i][j]);
            }
            if(m<co&&f)m++;
            else
            {
                m--;
                f=0;
            }
        }
        f=1;
        m=2;
        res[0][0]=data[0][0];
        if(co>1)
        {
            for(i=1; i<ro; i++)
            {
                if(i<co)t=min(m,co)-1;
                else t=min(m,co);
                for(j=0; j<t; j++)
                {
                    if(f)
                    {
                        k=max(res[i][j],res[i-1][j]+data[i][j]);
                        res[i][j+1]=max(res[i][j+1],res[i-1][j]+data[i][j+1]);
                        res[i][j]=k;
                    }
                    else res[i][j]=max(res[i-1][j]+data[i][j],res[i-1][j+1]+data[i][j]);
                    //printf("#%lld %lld",res[i][j],res[i][j+1]);
                }
                if(m<co&&f&&i<=co)m++;
                else
                {
                    m--;f=0;
                }
            }
        }
        printf("Case %lld: %lld\n",c,res[ro-1][0]);

    }

    return 0;
}
