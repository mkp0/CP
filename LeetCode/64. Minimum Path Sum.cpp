class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int dp[m+1][n+1];
        
        for(int i = 0 ; i<= m ;i++)
        {
            for(int j = 0; j <= n ;j++)
            {
                if(!i || !j)
                {
                    dp[i][j] = 1e6;
                }
                else if(i==1&&j==1)
                {
                    dp[i][j] = grid[i-1][j-1];
                }
                else{
                    dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i-1][j-1];
                }
            }
        }
        
        return dp[m][n];
    }
};