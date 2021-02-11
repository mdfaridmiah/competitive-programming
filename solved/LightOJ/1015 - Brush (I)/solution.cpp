#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in","r",stdin);
    //freopen("out","w",stdoutt);
    
    int test,n,arr[100005],i,c=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>=0)
                sum += arr[i];

        }
        printf("Case %d: %d\n",c++,sum);
    }
    return 0;
}
