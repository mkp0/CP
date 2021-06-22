#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define llinf 1e17
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))

using namespace std;

/* I'm gonna be the King of the Pirates */
int mod = 1e9 + 7;
int v, e;
vector<int> g[100001];
vector<bool> vis(100001, false);

void dfs(int src)
{
    vis[src] = true;
    for (auto x : g[src])
    {
        if (!vis[x])
            dfs(x);
    }
}

void solve()
{
    cin >> v >> e;
    vector<vector<ll>> edges;

    for (int i = 0; i < e; i++)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        edges.pb({x, y, w});
        g[x].pb(y);
    }

    vector<ll> dist(v + 1, -llinf);
    dist[1] = 0;
    for (int i = 1; i < v; i++)
    {
        for (auto &x : edges)
        {
            if ((dist[x[0]] != -llinf) && (dist[x[1]] < dist[x[0]] + x[2]))
            {
                dist[x[1]] = dist[x[0]] + x[2];
            }
        }
    }

    for (auto &x : edges)
    {
        if ((dist[x[0]] != -llinf) && (!vis[x[0]] && (dist[x[1]] < dist[x[0]] + x[2])))
        {
            dfs(x[0]);
        }
    }

    if (vis[v])
    {
        cout << -1 << endl;
        return;
    }

    cout << dist[v] << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}