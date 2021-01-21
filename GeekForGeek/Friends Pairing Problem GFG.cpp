class Solution
{
public:
    int countFriendsPairings(int n)
    {
        long long dp[n + 1];
        int mod = 1e9 + 7;
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = (dp[i - 1] % mod + (i - 1) * 1LL * dp[i - 2] % mod) % mod;
        }

        return dp[n] % mod;
    }
};