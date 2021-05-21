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