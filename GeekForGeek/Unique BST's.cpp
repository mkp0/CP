class Solution
{
public:
    //Function to return the total number of possible unique BST.
    int mod = 1e9 + 7;
    long long dp[1001];

    int func(int n)
    {
        if (n == 0)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        long long ans = 0;

        for (int i = 1; i <= n; i++)
        {
            ans = (ans % mod + (func(i - 1) * 1LL * func(n - i)) % mod) % mod;
        }

        dp[n] = ans % mod;

        return ans;
    }

    int numTrees(int N)
    {
        memset(dp, -1, sizeof(dp));

        int ans = func(N);

        return ans;
    }
};