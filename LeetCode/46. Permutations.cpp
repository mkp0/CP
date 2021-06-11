class Solution
{
public:
    void permutation(vector<int> &nums, int pos, vector<vector<int>> &ans)
    {
        if (pos == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int i = pos; i < nums.size(); i++)
        {
            swap(nums[pos], nums[i]);
            permutation(nums, pos + 1, ans);
            swap(nums[pos], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        permutation(nums, 0, ans);

        return ans;
    }
};