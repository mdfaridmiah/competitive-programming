#include<stdio.h>

int main()
{
    int i,j,test1,test2,x1,x2,x,y1,y2,y;
    scanf("%d",&test1);
    for(i=1; i<=test1; i++)
    {
        printf("Case %d:\n",i);
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&test2);
        for(j=1; j<=test2; j++)
        {
            scanf("%d %d",&x,&y);
            if((x>=x1&&x<=x2)&&(y>=y1&&y<=y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}

