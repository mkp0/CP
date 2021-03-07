class Solution
{
public:
    int minOperation(int n)
    {
        int dp[n + 1];
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                dp[i] = dp[i - 1] + 1;
            }
            else
            {
                dp[i] = dp[i / 2] + 1;
            }
        }
        return dp[n];
    }
};