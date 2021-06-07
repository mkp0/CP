class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int ans = nums[0];
        int maxtill = nums[0];
        int mintill = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < 0)
                swap(maxtill, mintill);

            maxtill = max(nums[i], maxtill * nums[i]);
            mintill = min(nums[i], mintill * nums[i]);
            ans = max(ans, maxtill);
        }

        return ans;
    }
};