#include<bits/stdc++.h>
using namespace std;

const int mx =  1234567;
const int md =  1e9+7;
int flg = 0,ans = -123;

struct node {
    int  endmark;
    int c;
    node *next[4 + 1];
    node(){
    endmark = -1;
    for(int i = 0; i < 4; i++){
        next[i] = NULL;
        c = 0;
        }
    }
} *root;
 
void insert(string ch, int len){
    node *curr = root;
    int i;
    for( i = 0; i < len; i++) {
        int id;
        if(ch[i]=='A') id = 0;
        if(ch[i]=='C') id = 1;
        if(ch[i]=='G') id = 2;
        if(ch[i]=='T') id = 3;
        int g=0;
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
        ++curr->c;
        //cout<<"#"<<curr->c<<endl;
        ans = max(ans ,(i+1) * curr->c );
    }
    curr->endmark = -123;
     ans = max(ans ,(i) * curr->c );
}
 
//bool search(string ch, int len){
//    node *curr = root;
//    for (int i = 0; i < len; i++) {
//        int id = ch[i] - 'A';
//        if (curr->next[id] == NULL)
//            return false;
//        curr = curr->next[id];
//    }
//    return curr->c;
//}
 
void del(node  *cur){
    for (int i = 0; i < 4; i++)
        if (cur->next[i]) del(cur->next[i]);
    delete (cur);
}
 
int main(){
    int tk,cs=0,num_word,i,k =0;
    char str[105];
    scanf("%d",&tk);
    while(tk--){
    flg = 0;
    ans = -123;
    root = new node();
    scanf("%d",&num_word);
    while(num_word --){
        scanf("%s",str);
        k = strlen(str);
        insert(str,k);
    }
    printf("Case %d: %d\n",++cs,ans);
  //  puts("ENTER NUMBER OF QUERY");
    del(root);
    }
    return 0;
}