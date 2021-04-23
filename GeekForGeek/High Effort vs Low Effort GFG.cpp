class Solution
{
    public:
        int maxAmt(int n , int hi[] , int li[])
        {
            int dp[2][n+1];
            
            for(int i = 0 ; i < 2 ;i++)
            for(int j = 0 ; j <= n ; j++)
            dp[i][j] = 0;
            
            dp[0][1] = hi[0];
            dp[1][1] = li[0];
            
            for(int i = 2 ; i <= n ;i++)
            {
                dp[0][i] = max(dp[0][i-2],dp[1][i-2]) + hi[i-1];
                dp[1][i] = max(dp[0][i-1],dp[1][i-1]) + li[i-1];
            }
            
            return max(dp[0][n],dp[1][n]);
        }
};
