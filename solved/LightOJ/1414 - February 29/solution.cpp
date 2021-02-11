#include<stdio.h>
#include<math.h>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

bool ly(long long n)
{
    if((n%4==0&&n%100!=0)||n%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    long long tk,i,j,to[22],too[22],d,y,d2,y2,c=1,flg,sum,sum2;
    char st[20],st2[20];
    map<string,int>mp;
    string stt[]= {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November" ,"December"};
    for(i=0; i<12; i++)
        mp[stt[i]]=i;
    scanf("%lld",&tk);
    while(tk--)
    {
        scanf("%s%lld, %lld",&st,&d,&y);
        //printf("#%s#%lld#%lld",st,d,y);
        scanf("%s%lld, %lld",&st2,&d2,&y2);

        if(ly(y))
        {
            if(mp[st]>1)
            {
                y++;
            }
            else y--;
        }
        if(ly(y2))
        {
            if(mp[st2]>1||(mp[st2]==1&&d2==29))
            {
                y2++;
            }
            else y2--;
        }
        sum=(y/4)-(y/100)+(y/400);
        sum2=(y2/4)-(y2/100)+(y2/400);
        printf("Case %lld: %lld\n",c,sum2-sum);
        c++;
    }
    return 0;
}
