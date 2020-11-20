class Solution
{

public:
    int findMinCost(string x, string y, int cx, int cy)
    {
        int n = x.size();
        int m = y.size();

        int dp[n + 1][m + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if (x[i - 1] == y[j - 1])
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

        return ((n - dp[n][m]) * cx) + ((m - dp[n][m]) * cy);
    }
};