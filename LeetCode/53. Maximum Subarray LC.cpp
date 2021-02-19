class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = INT_MIN;
        int summ = 0;
        for (auto x : nums)
        {

            summ = summ + x;
            ans = max(ans, summ);
            if (summ < 0)
            {
                summ = 0;
            }
        }
        return ans;
    }
};