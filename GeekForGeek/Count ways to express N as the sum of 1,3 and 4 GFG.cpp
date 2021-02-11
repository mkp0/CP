class Solution
{
public:
    long long countWays(int n)
    {
        int dp[n + 1] = {0};
        int mod = 1e9 + 7;

        dp[0] = 1;

        int x[] = {1, 3, 4};

        for (int i = 1; i <= n; i++)
        {
            dp[i] = 0;
            for (int j = 0; j < 3; j++)
            {
                if (x[j] <= i)
                    dp[i] = (dp[i - x[j]] % mod + dp[i] % mod) % mod;
            }
        }

        return dp[n];
    }
};