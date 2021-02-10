class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maxi = 0;

        for (auto x : accounts)
        {
            int su = 0;
            for (auto y : x)
            {
                su += y;
            }
            maxi = max(maxi, su);
        }

        return maxi;
    }
};