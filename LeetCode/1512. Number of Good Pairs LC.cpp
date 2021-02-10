class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int dp[101];
        for (int i = 0; i <= 100; i++)
        {
            dp[i] = 0;
        }
        int n = nums.size();

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            dp[nums[i]]++;
        }

        for (int i = 0; i <= 100; i++)
        {
            if (dp[i])
                ans += (dp[i] * (dp[i] - 1)) / 2;
        }

        return ans;
    }
};