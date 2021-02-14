class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;

        int n = nums.size();

        for (int i = 0; i < n; i += 2)
        {
            while (nums[i]--)
            {
                ans.push_back(nums[i + 1]);
            }
        }

        return ans;
    }
};