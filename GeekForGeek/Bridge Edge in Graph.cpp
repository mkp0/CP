class Solution
{
public:
    int timer = 0, C, D;
    vector<int> disc;
    vector<int> la;
    vector<bool> vis;

    bool is;
    void dfs(int src, int par, vector<int> adj[])
    {
        vis[src] = true;
        timer++;
        la[src] = timer;
        disc[src] = timer;

        for (auto x : adj[src])
        {
            if (x == par)
                continue;
            if (vis[x])
                la[src] = min(la[src], disc[x]);
            else
            {
                dfs(x, src, adj);
                la[src] = min(la[src], la[x]);

                if (la[x] > disc[src] && min(x, src) == C && max(x, src) == D)
                {
                    is = true;
                    return;
                }
            }
        }
    }

    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        disc.resize(V + 1);
        la.resize(V + 1);
        vis.resize(V + 1);

        timer = 0;
        is = false;

        if (c > d)
            swap(c, d);
        C = c, D = d;

        for (int i = 0; i <= V; i++)
        {
            disc[i] = 0;
            la[i] = 0;
            vis[i] = false;
        }

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
                dfs(i, -1, adj);
        }

        return is;
    }
};