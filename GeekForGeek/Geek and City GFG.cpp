#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void dfs(int src, vector<int> g[], vector<int> &vis)
{
    if (vis[src])
        return;

    vis[src] = true;
    for (auto x : g[src])
    {
        if (!vis[x])
            dfs(x, g, vis);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> g[n];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    int co = 0;
    vector<int> vis(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            co++;
            dfs(i, g, vis);
        }
    }

    cout << co - 1 << "\n";
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}