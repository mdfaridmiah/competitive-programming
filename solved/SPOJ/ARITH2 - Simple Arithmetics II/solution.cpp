#include<bits/stdc++.h>
using namespace std;
int const mx = 1234567;
char tab[mx];
int main(){
 // freopen("in", "r", stdin);
 // freopen("out", "w", stdout);
   long long tk, cs = 0, n, k, i, j, cnt = 0, x,y;
   char  tt = 'z';
   char   ss[mx] ,ch;
// printf("%d\n",'1');
   scanf("%lld",&tk);
 
    while(tk--){
            y = 1;
       long long re = 0;
 
      //    getchar();
     // istringstream is(ch);
        int flg = 0;
        int g = 0;
        tt = '+';
        while(scanf("%s",ss) ==1 ){
                j = 0;
                i = 0;
                k= 0;
            //  printf(">> %c\n",ss[0]);
            if(ss[0] == '='){
                 printf("%lld\n",re);
                 break;
            }
 
            if ( ss[0] > '9' || ss[0] < '0'  ){
                    tt = ss[0];
            }
         else  {
             x = strlen(ss);
     //   cout<<" X > "<< x<<endl;
                  while(x--){
                        k = k*10 + (ss[i] -'0');
                        i++;
                    }
     //  cout <<"K"<< k <<endl;
                 if(tt  == '+') re = re + k;
            else if(tt == '-') re = re - k;
            else if(tt  == '*') re = re * k;
            else if(tt  == '/') re = re / k;
 
            }
 
 
    //   cout <<"#"<< re<<endl;
    //   cout <<">>"<< ss[0]<<endl;
    //   cout <<ss<<endl;
        }
 
    }
 

return 0;
} 