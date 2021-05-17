class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();

        if (n <= 1)
            return 1;

        int dp[n];
        dp[0] = 1;

        int ans = 1;

        for (int i = 1; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(dp[i], ans);
        }

        return ans;
    }
};