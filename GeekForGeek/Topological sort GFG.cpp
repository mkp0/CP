class Solution
{
public:
    vector<int> topoSort(int n, vector<int> adj[])
    {
        vector<int> indeg(n, 0);
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (auto x : adj[i])
            {
                indeg[x]++;
            }
        }

        vector<int> ans;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (!indeg[i])
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            ans.push_back(x);
            vis[x] = true;

            for (auto y : adj[x])
            {
                indeg[y]--;
                if (!indeg[y])
                {
                    q.push(y);
                }
            }
        }
        return ans;
    }
};