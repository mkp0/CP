class Solution
{
public:
    long long int count(int s[], int m, int n)
    {
        long long dp[m + 1][n + 1];

        for (int i = 0; i <= n; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 0; i <= m; i++)
        {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - s[i - 1]];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[m][n];
    }
};