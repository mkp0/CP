#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n, m, t, c;
    cin >> n >> m >> t >> c;
    vector<int> g[n + 1];
    vector<int> par(n + 1, 0);
    vector<int> vis(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    int u, v;
    cin >> u >> v;

    queue<int> q;
    q.push(u);
    par[u] = -1;
    vis[u] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        sort(g[u].begin(), g[u].end());

        for (auto x : g[u])
        {
            if (!vis[x])
            {
                vis[x] = 1;
                par[x] = u;
                if (x == v)
                {
                    break;
                }
                q.push(x);
            }
        }
    }

    vector<int> ans;

    while (v != -1)
    {
        ans.pb(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n";

    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
