#include<bits/stdc++.h>

using namespace std;
int a,b;
int v[100][100];
char c[100][100];
int X[]= {1,-1,0,0};
int Y[]= {0,0,-1,1};
int co=1;
void bfssol(int px,int py)
{
    int r,C;
    //cout<<px<<py<<endl;
    queue<int >q;
    q.push(px);
    q.push(py);
    while(!q.empty())
    {
        r=q.front();
        q.pop();
        C=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            if(0<=r+X[i] && r+X[i]<a && C+Y[i]<b && 0<= C+Y[i]&& v[r+X[i]][C+Y[i]]==0)
            {
                // cout<<X[i]<<" "<<Y[i]<<endl;
                //cout<<"#"<<r+X[i]<<" "<<C+Y[i]<<endl;
                v[r+X[i]][C+Y[i]]=1;
                q.push(r+X[i]);
                q.push(C+Y[i]);
                co++;
            }
        }
    }
}
int main()
{
    int ca=0,t,k=0;
    scanf("%d",&t);
    while(t--)
    {
        co=1;
        k++;
        memset(v,0,sizeof(v));
        int px,py;
        scanf("%d %d",&b,&a);
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='#')
                {
                    v[i][j]=1;
                }
                if(c[i][j]=='@')
                {
                    px=i;
                    py=j;
                    v[i][j]=1;
                }
            }
        }
        bfssol(px,py);
        printf("Case %d: %d\n",k,co);
    }
    return 0;
}
