#include <stdio.h>
#include <iostream>
#include <string.h>
#include <queue>
#include <stack>
#include <deque>

using namespace std;
int main()
{
    int tk,t=0,n,m,no;
    scanf("%d",&tk);
    while(tk--)
    {
        t++;
        printf("Case %d:\n",t);
        scanf("%d%d",&n,&m);
        deque<int>q;
        string s;
        while(m--)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                scanf("%d",&no);
                if(q.size()!=n)
                {
                    q.push_front(no);
                    cout<<"Pushed in left: "<<no<<endl;

                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(s=="pushRight")
            {
                scanf("%d",&no);
                if(q.size()!=n)
                {
                    q.push_back(no);
                    cout<<"Pushed in right: "<<no<<endl;

                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(s=="popLeft")
            {
                if(q.empty())cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }

            }
            else if(s=="popRight")
            {
                if(q.empty())cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }
    }
    return 0;
}
