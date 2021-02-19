// method 1 map

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> m;
        for (auto x : nums1)
        {
            m[x]++;
        }

        vector<int> ans;

        for (auto x : nums2)
        {
            if (m[x])
            {
                ans.push_back(x);
                m[x]--;
            }
        }

        return ans;
    }
};

// method 2 multiset

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        multiset<int> s;

        for (auto x : nums1)
        {
            s.insert(x);
        }

        vector<int> ans;

        for (auto x : nums2)
        {
            auto it = s.find(x);

            if (it != s.end())
            {
                ans.push_back(x);
                s.erase(it);
            }
        }

        return ans;
    }
};