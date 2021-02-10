class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;

        int leng = nums.size();

        for (int j = 0; j < n; j++)
        {
            for (int i = j; i < leng; i += n)
            {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};