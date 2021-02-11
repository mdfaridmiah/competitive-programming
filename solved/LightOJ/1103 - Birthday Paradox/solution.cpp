#include<bits/stdc++.h>
using namespace  std;

int  main ()  {
    int  tk;
    scanf ("%d",&tk);
    for (int  i = 1; i <= tk; i ++){
        int  day;
        scanf ("%d",&day);
        int  man = 0;
        double  temp = 1;
        while (1) {
            temp *= (day-man) * 1.0 / day;
            if(1.0-temp >= 0.5) break ;
            man++;
        }
        printf ("Case% d:% d\n" ,i, man);
    }
    return 0;
}
