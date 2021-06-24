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
#define llinf 1e18
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))

using namespace std;

/* I'm gonna be the King of the Pirates */
int mod = 1e9 + 7;
vector<int> g[100001];
vector<bool> vis(100001, false);
int v, e;

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

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    vector<pair<int, int>> ans;
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            if (i != 1)
            {
                ans.push_back({i - 1, i});
            }
        }
    }

    cout << ans.size() << endl;

    for (auto [a, b] : ans)
    {
        cout << a << " " << b << endl;
    }
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