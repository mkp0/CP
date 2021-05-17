int rob(vector<int> &nums)
{
    int n = nums.size();

    if (n == 0)
        return 0;

    if (n == 1)
        return nums[0];

    return max(robbing(nums, 0, n - 2), robbing(nums, 1, n - 1));
}

int robbing(vector<int> &nums, int st, int ed)
{
    int n = ed - st + 1;
    int dp[n + 1][2];
    dp[0][0] = dp[0][1] = 0;

    dp[1][0] = 0;
    dp[1][1] = nums[st];

    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = max(dp[i - 2][0], dp[i - 2][1]) + nums[st + i - 1];
    }

    return max(dp[n][1], dp[n][0]);
}