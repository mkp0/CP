class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int su = 0;
        for (int i = 0; i < n; i++)
        {
            su += nums[i];
        }

        su = su / 2;
        vector<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            su -= nums[i];
            ans.push_back(nums[i]);
            if (su < 0)
                return ans;
        }

        return ans;
    }
};