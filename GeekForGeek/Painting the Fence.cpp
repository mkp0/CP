class Solution
{
public:
    long long mod = 1e9 + 7;

    long long countWays(int n, int k)
    {
        long long dp[n + 1][2];
        // o means same 1 means last 2 different
        dp[1][0] = 0;
        dp[1][1] = k;
        dp[2][0] = k;
        dp[2][1] = k * (k - 1) % mod;

        for (int i = 3; i <= n; i++)
        {
            dp[i][0] = dp[i - 1][1];                                  // we add same last char at the end of prev diffent last two state
            dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) * (k - 1) % mod; // we add different char at the total possiblity of previous state
        }

        return (dp[n][0] + dp[n][1]) % mod;
    }
};