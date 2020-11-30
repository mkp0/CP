vector<int> bfs(vector<int> g[], int n)
{

    vector<int> ans;

    queue<int> q;
    vector<bool> vis(n, false);
    vis[0] = true;
    q.push(0);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);

        for (auto x : g[u])
        {
            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
            }
        }
    }

    return ans;
}