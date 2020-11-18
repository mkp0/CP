class Solution{
public:
    int countWays(string S1, string S2){
        int n1 = S1.size();
        int n2 = S2.size();
        
        int dp[n2+1][n1+1];
        
        memset(dp,0,sizeof(dp));
        for(int i = 0 ; i <= n1 ;i++)
        {
            dp[0][i] = 1;
        }
        for(int i = 0 ; i < n2 ;i++)
        {
            for(int j = 0 ; j<n1 ;j++)
            {
                if(S1[j]==S2[i])
                {
                    dp[i+1][j+1] = dp[i][j] + dp[i+1][j];
                }else{
                    dp[i+1][j+1] = dp[i+1][j];
                }
            }
        }
        return dp[n2][n1];
    }
};