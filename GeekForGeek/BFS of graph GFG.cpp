class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        queue<int> q;
        q.push(0);
        vector<bool> vis(V, false);
        vis[0] = true;
        vector<int> ans;
        ans.push_back(0);

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            for (auto x : adj[u])
            {
                if (!vis[x])
                {
                    q.push(x);
                    vis[x] = true;
                    ans.push_back(x);
                }
            }
        }

        return ans;
    }
};