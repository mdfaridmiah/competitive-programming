class Solution {
public:
    map<int, int> mp;
    int sumOfUnique(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = 0; 
         for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] == 1) ans += nums[i];
        }
        return ans;
    }
};