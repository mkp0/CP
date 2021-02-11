class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int co = 0;

        for (auto x : grid)
        {
            co += (upper_bound(x.rbegin(), x.rend(), -1) - x.rbegin());
        }
        return co;
    }
};