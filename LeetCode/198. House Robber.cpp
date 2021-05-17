class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1][2];
        dp[0][0] = dp[0][1] = 0;
        
        if(n==0)
            return 0;
        
        dp[1][0] = 0;
        dp[1][1] = nums[0];
        
        for(int i = 2 ; i <= n ;i++)
        {
            dp[i][0] = max(dp[i-1][0],dp[i-1][1]);
            dp[i][1] = max(dp[i-2][0],dp[i-2][1])+nums[i-1];
        }
        
        return max(dp[n][1],dp[n][0]);       
                
    }
};