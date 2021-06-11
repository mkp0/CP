class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int su = 0;
        for(auto &x : nums)
        {
            su += x;
        }
        
        if(target>su || (su+target)%2)
            return 0;
        
        vector<int> dp((su+target)/2 +1);
        
        dp[0] = 1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = (su+target)/2; j >= nums[i] ; j--)
            {
                dp[j] += dp[j-nums[i]];
            }
        }
        
        return dp[(su+target)/2];        
    }
};