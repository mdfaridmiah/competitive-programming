#include<bits/stdc++.h>
using namespace std;
#define MAXN 10000
#define SQRSIZE 100
int const mx = 123456;
int arr[mx];
int block[mx];
int blk_sz;
// Time Complexity : O(1)
void update(int idx, int val){
    int blockNumber = idx / blk_sz;
    block[blockNumber] += val - arr[idx];
    arr[idx] = val;
}

// Time Complexity : O(sqrt(n))
int query(int l, int r){
    int sum = 1234567;
    while (l<r and l%blk_sz!=0 and l!=0){
        sum  = min(sum,   arr[l]);
        l++;
    }
    while (l+blk_sz <= r){
        sum  = min ( block[l/blk_sz], sum);
        l += blk_sz;
    }
    while (l<=r){
        sum  =min (arr[l],sum);
        l++;
    }
    return sum;
}

void preprocess(int input[], int n){
    int blk_idx = -1;
    blk_sz = sqrt(n);
    for (int i=0; i<n; i++)
        block[i] = 1234567;

    for (int i=0; i<n; i++)
    {
        arr[i] = input[i];
        if (i%blk_sz == 0)
        {
            blk_idx++;
        }
        block[blk_idx]  = min(block[blk_idx],arr[i] );
    }
}

int main(){

   int input[mx],n,tk,i,cs = 0,q;
   scanf("%d",&tk);
   while(tk--){
    scanf("%d%d",&n,&q);
    for(i =0;i<n;i++)
        scanf("%d",input + i);
     preprocess(input, n);
     int a,b,ans;
     printf("Case %d:\n",++cs);
     for(i =0;i<q;i++){
        scanf("%d%d",&a,&b);
        a--;
        b--;
        ans = query(a, b);
        printf("%d\n",ans);
     }
   }

    return 0;
}
