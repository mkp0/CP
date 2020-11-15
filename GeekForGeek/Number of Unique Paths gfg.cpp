//User function template in C++

int NumberOfPath(int a, int b) {
    int dp[a+1][b+1];
    memset(dp,0,sizeof(dp));
    
    dp[0][0]=1;
    for(int i = 1 ; i <=a ; i++)
    {
        dp[i][0] = 1;
    }
    for(int i = 1 ; i <=b ; i++)
    {
        dp[0][i] = 1;
    }
    
    for(int i = 1 ; i <=a ;i++)
    {
        for(int j = 1 ; j <= b ; j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[a-1][b-1];
}