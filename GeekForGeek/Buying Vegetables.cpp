class Solution{
public:
    
    int minCost(int N, vector<int> cost[]) {
        
        int dp[N+1][3];
        
        dp[0][0] = dp[0][1] = dp[0][2] = 0;
        
        for(int i = 1 ; i <= N ;i++)
        {
            for(int j = 0 ; j < 3; j++)
            {
                dp[i][j] = cost[i-1][j] + min(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]);
            }
        }
        
        return min(dp[N][0],min(dp[N][1],dp[N][2]));
    }
};