class Solution{
public:
    int maxSum(int N, vector<vector<int>> mat)
    {
        vector<vector<int>> dp(2,vector<int>(N+1,0));
        
        dp[0][1] = mat[0][0];
        dp[1][1] = max(mat[1][0],mat[0][0]);
        
        for(int i = 2 ; i <= N ;i++)
        {
            dp[0][i] = dp[1][i-2] + mat[0][i-1];
            dp[1][i] = dp[1][i-2] + mat[1][i-1];
            
            dp[0][i] = max(dp[0][i],dp[1][i-1]);
            dp[1][i] = max(dp[1][i],dp[0][i]);
        }
        
        return dp[1][N];
    }
};