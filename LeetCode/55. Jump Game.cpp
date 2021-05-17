bool canJump(vector<int> &nums)
{
    int n = nums.size();

    if (n == 0 || n == 1)
        return true;

    if (nums[0] == 0)
        return false;

    int maxS = nums[0];

    for (int i = 1; i < n - 1; i++)
    {
        if (maxS > 0)
        {
            maxS = max(maxS - 1, nums[i]);
        }
        if (!maxS)
        {
            return false;
        }
    }

    return true;
}