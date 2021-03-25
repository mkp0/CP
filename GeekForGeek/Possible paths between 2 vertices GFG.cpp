class Solution
{
public:
    void dfs(vector<int> adj[], int s, int d, int &ans, vector<int> vis)
    {
        if (s == d)
        {
            ans++;
            return;
        }
        if (vis[s])
            return;
        vis[s] = true;

        for (auto x : adj[s])
        {
            if (!vis[x])
            {
                dfs(adj, x, d, ans, vis);
            }
        }
    }

    int countPaths(int v, vector<int> adj[], int s, int d)
    {
        int ans = 0;
        if (s == d)
        {
            return 1;
        }
        for (auto x : adj[s])
        {
            vector<int> vis(v, false);
            dfs(adj, x, d, ans, vis);
        }

        return ans;
    }
};