#include<bits/stdc++.h>
using namespace std;
 
const int mx =  1234567;
const int md =  1e9+7;
int cnt = 0;
 
struct node {
    bool endmark;
    int c;
    node *next[52 + 1];
    node(){
    endmark = false;
    for(int i = 0; i < 52; i++)
        next[i] = NULL;
        c = 0;
    }
} *root;
 
void insert(string  ch, int len){
    node *curr = root;
    for(int i = 0; i < len; i++) {
        int id;
       if(ch[i]>='a' && ch[i]<='z') id = ch[i] - 'a';
       else id = ch[i] - 'A' + 26;
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
        ++curr->c;
        if(curr->c ==1){
            cnt++;
        }
    }
    curr->endmark = true;
}
/*
bool search(char *ch, int len){
    node *curr = root;
    for (int i = 0; i < len; i++) {
        int id = ch[i] - 'a';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}
 
int child(node *curr ,int  *index){
    int cnt = 0;
    for(int i = 0; i < 26; i++){
       if(curr->next[i] != NULL){
            cnt++;
            *index = i;
       }
    }
    return cnt;
}
 
string findLCP(){
    node *curr = root;
	string lcp = "";
	int index;
    while(curr && !curr->endmark ){
        int id = child(curr,&index);
        if(id!=1)break;
        lcp +=  (index +'a');
        curr = curr->next[index];
	}
	return lcp;
}
*/
void del(node  *cur){
    for (int i = 0; i < 52; i++)
        if (cur->next[i]){
            del(cur->next[i]);
        }
   // cur->c = 0;
    delete (cur);
 
}
 
int main(){
   // printf("%d %d/n",'A' - 'A', 'e'-'a');
    int tk;
    string st,nm="";
    scanf("%d",&tk);
    while(tk--){
    nm = "";
    root = new node();
    cin>>st;
    int c = 1,sz = st.size();
    for(int i = sz-1; i >=0; i--) {
        nm = st[i] + nm;
        insert(nm, c);
        c++;
    }
     del(root);
     printf("%d\n",cnt);
     cnt = 0;
 
    }
    return 0;
    }
 