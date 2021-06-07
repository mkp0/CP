class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<int, int> m;
        int n = nums.size();
        m[0] = 1;
        int ans = 0, su = 0;
        for (int i = 0; i < n; i++)
        {
            su += nums[i];
            if (m.find(su - k) != m.end())
            {
                ans += m[su - k];
            }
            m[su]++;
        }
        return ans;
    }
};