class Solution
{
public:
    int maxSumAfterPartitioning(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<int> dp(n + 1);

        for (int i = 1; i <= n; i++)
        {
            int maxi = arr[i - 1];
            for (int j = i; j > 0 && ((i - j + 1) <= k); j--)
            {
                maxi = max(maxi, arr[j - 1]);
                dp[i] = max(dp[i], (i - j + 1) * maxi + dp[j - 1]);
            }
        }

        return dp[n];
    }
};