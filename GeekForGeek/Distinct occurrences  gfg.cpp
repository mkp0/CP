
int subsequenceCount(string s, string t)
{
    int n = t.size();
    int m = s.size();

    int mod = 1e9 + 7;

    if (n > m)
    {
        return 0;
    }

    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
                if (i == 0)
                {
                    dp[i][j] = 1;
                }
            }
            else
            {
                if (t[i - 1] == s[j - 1])
                {
                    dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i][j - 1] % mod) % mod;
                }
                else
                {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
    }

    return dp[n][m];
}