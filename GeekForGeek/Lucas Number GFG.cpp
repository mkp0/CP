class Solution
{
public:
    long long lucas(int n)
    {

        // simple dp question on fabanaci series ;) spelling mistake i know
        long long dp[n + 1];
        dp[0] = 2;
        dp[1] = 1;
        int mod = 1e9 + 7;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        }

        return dp[n];
    }
};