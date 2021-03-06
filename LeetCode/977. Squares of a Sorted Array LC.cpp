class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int idx = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();

        int neg = idx - 1;

        vector<int> ans;

        int n = nums.size();

        while (idx <= (n - 1) && neg >= 0)
        {
            if (abs(nums[idx]) < abs(nums[neg]))
            {
                ans.push_back(nums[idx] * nums[idx]);
                idx++;
            }
            else
            {
                ans.push_back(nums[neg] * nums[neg]);
                neg--;
            }
        }

        while (idx <= n - 1)
        {
            ans.push_back(nums[idx] * nums[idx]);
            idx++;
        }
        while (neg >= 0)
        {
            ans.push_back(nums[neg] * nums[neg]);
            neg--;
        }
        return ans;
    }
};