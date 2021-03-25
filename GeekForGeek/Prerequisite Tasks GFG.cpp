class Solution
{
public:
    bool isPossible(int n, vector<pair<int, int>> &pre)
    {
        queue<int> q;
        vector<int> order;
        vector<int> g[n];

        for (auto x : pre)
        {
            g[x.second].push_back(x.first);
        }
        vector<int> indeg(n, 0);
        for (int i = 0; i < n; i++)
            for (auto &it : g[i])
                indeg[it]++;
        for (int i = 0; i < n; i++)
        {
            if (!indeg[i])
                q.push(i);
        }
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            order.push_back(u);
            for (auto &v : g[u])
            {
                indeg[v]--;
                if (!indeg[v])
                    q.push(v);
            }
        }
        return (order.size() == n);
    }
};
