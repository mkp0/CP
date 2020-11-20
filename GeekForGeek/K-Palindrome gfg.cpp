bool is_k_palin(string s, int k)
{
    string sr = s;

    reverse(sr.begin(), sr.end());

    int n = s.size();

    int dp[n + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (s[i - 1] == sr[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }

    if ((n - dp[n][n]) <= k)
    {
        return true;
    }

    return false;
}