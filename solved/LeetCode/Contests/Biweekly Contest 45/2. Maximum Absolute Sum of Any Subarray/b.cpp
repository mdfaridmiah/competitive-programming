class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    
        long long ans = -1234567, max_e = 0; 
        for (int i = 0; i < nums.size(); i++) { 
            max_e = max_e + nums[i]; 
            if (ans < max_e)  ans = max_e; 
            if (max_e < 0)  max_e = 0; 
        }

        long long ans2 = 1234567, max_e2 = 0;
          for (int i = 0; i < nums.size(); i++) { 
            max_e2 = max_e2 + nums[i]; 
            if (ans2 > max_e2)  ans2 = max_e2; 
            if (max_e2 > 0)  max_e2 = 0; 
        }

        return(max(ans, abs(ans2)));  

   }
};