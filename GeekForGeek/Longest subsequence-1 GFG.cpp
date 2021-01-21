class Solution
{
public:
    int longestSubsequence(int N, int arr[])
    {
        int dp[N];

        dp[0] = 1;

        int ans = 1;

        for (int i = 1; i < N; i++)
        {
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--)
            {
                if (abs(arr[j] - arr[i]) == 1)
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};