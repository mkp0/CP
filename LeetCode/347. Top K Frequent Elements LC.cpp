class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;

        vector<int> ans;
        for (auto x : nums)
        {
            m[x]++;
        }

        set<pair<int, int>> s;

        for (auto x : m)
        {
            s.insert({x.second, x.first});
        }

        while (s.size() > k)
        {
            s.erase(s.begin());
        }

        for (auto x : s)
        {
            ans.push_back(x.second);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};