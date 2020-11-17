// Complete this function
long long int count(long long int n)
{
    long long int dp[n + 1], i;
    memset(dp, 0, sizeof(dp));
    dp[0] = 1; // If 0 sum is required number of ways is 1.

    // Your code here
    long long vs[] = {3, 5, 10};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (vs[i] > j)
            {
                continue;
            }
            else
            {
                dp[j] += dp[j - vs[i]];
            }
        }
    }

    return dp[n];
}