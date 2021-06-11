class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int i = nums.size() - 2;

        while (i >= 0)
        {
            if (nums[i] < nums[i + 1])
                break;
            i--;
        }

        if (i == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        int j = nums.size() - 1;

        while (nums[i] >= nums[j])
        {
            j--;
        }

        swap(nums[i], nums[j]);

        reverse(nums.begin() + i + 1, nums.end());
    }
};