class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int dp[101];

        for (int i = 0; i <= 100; i++)
        {
            dp[i] = 0;
        }

        for (auto x : nums)
        {
            dp[x]++;
        }

        for (int i = 1; i <= 100; i++)
        {
            dp[i] = dp[i] + dp[i - 1];
        }
        vector<int> ans;
        for (auto x : nums)
        {
            if (x != 0)
                ans.push_back(dp[x - 1]);
            else
                ans.push_back(0);
        }

        return ans;
    }
};