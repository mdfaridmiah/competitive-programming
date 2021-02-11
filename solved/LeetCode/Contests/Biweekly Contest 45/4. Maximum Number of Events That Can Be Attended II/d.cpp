#define pb push_back
#define fi first
#define se second
typedef long long ll;

class Solution {
public:
    int n;
    vector<int> lo;
    int knap(vector<vector<int>>& events, int j, vector<vector<int>>& dp, int k) {
        if (k == 0) return 0;
        if (j == n) return 0;
        if (dp[j][k] != -1) return dp[j][k];
        auto it = upper_bound(lo.begin(), lo.end(), events[j][1]);
        dp[j][k] = max(knap(events, j + 1, dp, k), events[j][2] + knap(events, it - lo.begin(), dp, k - 1));
        return dp[j][k];
    }
    
    int maxValue(vector<vector<int>>& events, int k) {
        n = events.size();
        sort(events.begin(), events.end());
        for (int i = 0; i < n; i++) lo.push_back(events[i][0]);
        vector<vector<int>> dp(n, vector<int>(k+1, -1));
        return knap(events, 0, dp, k);
    }
};