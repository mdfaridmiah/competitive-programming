#include <stdio.h>
#include <string.h>
#include<algorithm>

int main(){
    int tk, i=0, j, flg;
    char a[120], b[120];
    scanf("%d",&tk);
    getchar();
    while(tk--){
        i++;
        int a1[26], b1[26];
        memset(a1,0,sizeof(a1));
        memset(b1,0,sizeof(b1));
        gets(a);
        gets(b);
        for(j=0; a[j]; j++){
            if(a[j]>=65 && a[j]<=90)
                a1[a[j]-65]++;
            else if(a[j]>=97 && a[j]<=122)
                a1[a[j]-97]++;
        }
        for(j=0; b[j]; j++){
            if(b[j]>=65 && b[j]<=90)
                b1[b[j]-65]++;
            else if(b[j]>=97 && b[j]<=122)
                b1[b[j]-97]++;
        }
        for(j=0, flg=1; j<26; j++){
            if(a1[j]!=b1[j]){
                printf("Case %d: No\n", i);
                flg = 0;
                break;
            }
        }
        if(flg==1) printf("Case %d: Yes\n", i);

    }
    return 0;
}
