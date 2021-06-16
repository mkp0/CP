class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i + 1)
            {
                if (nums[i] >= 1 && nums[i] <= n)
                {
                    int temp = nums[i];
                    swap(nums[i], nums[nums[i] - 1]);
                    if (temp != nums[i])
                        i--;
                }
            }
        }

        int ans = n + 1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i + 1)
                return i + 1;
        }

        return ans;
    }
};