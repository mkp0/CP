class Solution
{
public:
    int nCr(int n, int r)
    {
        int mod = 1e9 + 7;
        int dp[n + 1][r + 1];

        for (int i = 0; i <= r; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= r; j++)
            {
                if (i >= j)
                {
                    dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod) % mod;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }

        return dp[n][r] % mod;
    }
};