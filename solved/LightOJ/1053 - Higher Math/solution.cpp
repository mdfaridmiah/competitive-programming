#include<stdio.h>
int main()
{
    int i,test,a,b,c;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(((a*a)+(b*b))==c*c||((b*b)+(c*c))==a*a||((c*c)+(a*a))==b*b )
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
