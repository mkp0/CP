class Solution
{
public:
    int maxSubstring(string s)
    {
        int n = s.size();

        int dp[n + 1];
        dp[0] = 0;
        int ans = -1;

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0')
            {
                dp[i] = max(1, dp[i - 1] + 1);
            }
            else
            {
                dp[i] = max(dp[i - 1] - 1, -1);
            }
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};