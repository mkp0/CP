class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> m(nums2.begin(), nums2.end());
        vector<int> ans;
        for (auto x : nums1)
        {
            if (m.count(x))
            {
                ans.push_back(x);
                m.erase(x);
            }
        }

        return ans;
    }
};