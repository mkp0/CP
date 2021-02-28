class Solution
{
public:
    void cal(vector<int> &n, vector<int> &a, int st, int ed)
    {
        if (st > ed)
            return;

        int mi = (st + ed) / 2;

        a.push_back(n[mi]);

        cal(n, a, st, mi - 1);
        cal(n, a, mi + 1, ed);
    }

    vector<int> sortedArrayToBST(vector<int> &nums)
    {
        vector<int> ans;
        cal(nums, ans, 0, nums.size() - 1);
        return ans;
    }
};