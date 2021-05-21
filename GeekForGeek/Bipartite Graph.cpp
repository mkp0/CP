class Solution
{
public:
    vector<bool> vis;
    vector<int> col;
    bool isbip(int src, int color, vector<int> g[])
    {
        col[src] = color;
        vis[src] = true;

        for (auto x : g[src])
        {
            if (!vis[x])
            {
                if (!isbip(x, color ^ 1, g))
                {
                    return false;
                }
            }
            else
            {
                if (col[src] == col[x])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(int v, vector<int> g[])
    {
        vis.clear();
        vis.resize(v, false);
        col.clear();
        col.resize(v, 0);

        for (int i = 0; i < v; i++)
        {
            if (!vis[i])
            {
                if (!isbip(i, 0, g))
                {
                    return false;
                }
            }
        }
        return true;
    }
};