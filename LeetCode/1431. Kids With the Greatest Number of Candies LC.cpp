class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int eC)
    {
        int maxval = INT_MIN;

        for (auto x : candies)
        {
            maxval = max(maxval, x);
        }

        vector<bool> ans;

        for (auto x : candies)
        {
            if (x + eC >= maxval)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }

        return ans;
    }
};