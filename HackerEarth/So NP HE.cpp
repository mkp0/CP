#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n, m, k;

void dfs(vector<int> g[], vector<bool> &vis, int src)
{
    if (vis[src])
        return;
    vis[src] = true;

    for (auto x : g[src])
    {
        dfs(g, vis, x);
    }
}

int main()
{
    cin >> n >> m >> k;

    vector<int> g[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    int cc = 0;

    vector<bool> vis(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(g, vis, i);
            cc++;
        }
    }

    if (cc > k)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << m - n + k << "\n";
    }

    return 0;
}