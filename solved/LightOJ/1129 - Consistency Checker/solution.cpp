#include<bits/stdc++.h>
using namespace std;
const int mx =  1234567;
const int md =  1e9+7;

int flg = 0;
struct node {
    int  endmark;
    int c;
    node *next[10 + 1];
    node(){
    endmark = -1;
    for(int i = 0; i < 10; i++){
        next[i] = NULL;
        c = 0;
        }
    }
} *root;

void insert(string ch, int len){
    node *curr = root;
    for(int i = 0; i < len; i++) {
        int id = ch[i] - '0';
        int g=0;
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
         ++curr->c;
         //cout<<"#"<<curr->c<<endl;
         if(curr->c > 1 && curr->endmark == -123){
                flg=1;
               // cout<<"#~~~#"<<endl;
         }
    }
    curr->endmark = -123;
    if(curr->c > 1 && curr->endmark == -123) flg=1;
}

bool search(string ch, int len){
    node *curr = root;
    for (int i = 0; i < len; i++) {
        int id = ch[i] - '0';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->c;
}

void del(node  *cur){
    for (int i = 0; i < 10; i++)
        if (cur->next[i]) del(cur->next[i]);
    delete (cur);
}

int main(){
    int tk,cs=0,num_word,i,k =0;
    char str[105];
    scanf("%d",&tk);
    while(tk--){
    flg = 0;
    root = new node();
    scanf("%d",&num_word);
    while(num_word --){
        scanf("%s",str);
        k = strlen(str);
        insert(str,k);
    }
    if(flg==0)printf("Case %d: YES\n",++cs);
    else printf("Case %d: NO\n",++cs);

  //  puts("ENTER NUMBER OF QUERY");
    del(root);
    }
    return 0;
}
