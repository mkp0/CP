class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 0 || n == 1)
            return 0;

        int ju = 1;
        int endju = nums[0];
        int nextend = nums[0];

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                return ju;
            nextend = max(nextend, i + nums[i]);

            if (i == endju)
            {
                ju++;
                endju = nextend;
            }
        }

        return ju;
    }
};