class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int su = 0;
        for(auto &x : nums)
            su += x;
        
        if(su%2)
            return false;
        
        vector<int> dp(su/2 +1);
        dp[0] = true;
        
        for(int i = 0; i < nums.size() ;i++)
        {
            for(int j = su/2 ; j>= nums[i];j--)
            {
                 dp[j] = (dp[j] || dp[j-nums[i]]);
            }
        }
        
        return dp[su/2];
    }
};