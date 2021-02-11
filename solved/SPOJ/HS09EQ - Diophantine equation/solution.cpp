#include<stdio.h>
#include<math.h>
 
long long dio(long long no)
{
    long long i,j,cnt=0,t1,t2,k;
    for(i=0; (i*i*i*i)<=no; i++)
    {
        t1=no-(i*i*i*i);
        for(j=0; (j*j*j)<=t1; j++)
        {
            t2=t1-(j*j*j);
                cnt+=sqrt(t2)+1;
        }
    }
    return cnt;
}
 
int main()
{
    long long Tk,n,res,temp;
    scanf("%lld",&Tk);
 
    while(Tk--)
    {
        scanf("%lld",&n);
        res=dio(n);
        printf("%lld",res);
        if(Tk)printf("\n");
    }
    return 0;
}
 
Source code | Plain text | Copy to submit
ads via Carbon
Adobe Creative Cloud for Teams starting at $33.99 per month.
ADS VIA CARBON

About | Tutorial | Tools | Clusters | Credits | API | Widgets

Legal: Terms of Service | Privacy Policy | GDPR Info

 RSS 
© S