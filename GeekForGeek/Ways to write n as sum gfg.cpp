int countWays(int n)
{
    int mod = 1e9 + 7;
    int dp[n + 1] = {0};

    for (int i = 0; i <= n; i++)
    {
        dp[i] = 0;
    }

    dp[0] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > j)
                continue;
            dp[j] = (dp[j] % mod + dp[j - i] % mod) % mod;
        }
    }

    return dp[n] % mod;
}