#include <stdio.h>

int main()
    {
    int i,j,y,input,sum=0,donation;
    scanf("%d",&input);
    char step[6];

    for(i = 0; i<input; i++) {
            scanf("%d",&j);

                    printf("Case %d:\n",i+1);
            for(y = 0; y<j; y++) {
                    scanf("%s",step);
                    if(step[0]=='d') {
                            scanf("%d",&donation);
                            sum+=donation;

                            }
                    if(step[0]=='r')
                        printf("%d\n",sum);



                    }
                    sum = 0;

            }
    return 0;

    }
