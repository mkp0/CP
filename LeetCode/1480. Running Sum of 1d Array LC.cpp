class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> ans;
        if (nums.empty())
        {
            return ans;
        }
        ans.push_back(nums[0]);

        int n = nums.size();

        for (int i = 1; i < n; i++)
        {
            ans.push_back(ans[i - 1] + nums[i]);
        }
        return ans;
    }
};