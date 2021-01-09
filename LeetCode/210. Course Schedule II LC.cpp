class Solution
{
public:
    vector<int> findOrder(int nC, vector<vector<int>> &prereq)
    {
        vector<int> indeg(nC, 0);
        vector<int> g[nC];
        vector<int> ans;
        for (auto x : prereq)
        {
            indeg[x[0]]++;
            g[x[1]].push_back(x[0]);
        }

        set<pair<int, int>> s;

        for (int i = 0; i < nC; i++)
        {
            s.insert({indeg[i], i});
        }

        while (!s.empty())
        {
            auto x = *s.begin();
            if (x.first != 0)
            {
                ans.clear();
                return ans;
            }

            ans.push_back(x.second);

            int u = x.second;

            s.erase({indeg[u], u});

            for (auto x : g[u])
            {
                s.erase({indeg[x], x});
                indeg[x]--;
                s.insert({indeg[x], x});
            }
        }

        return ans;
    }
};