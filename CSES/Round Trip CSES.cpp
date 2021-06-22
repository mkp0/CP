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
int v, e;
vector<int> g[100001];
vector<bool> vis(100001, false);
vector<int> par(100001);

int cycle(int src, int parr)
{
    vis[src] = true;
    par[src] = parr;
    // cout << src << "x" << parr << " ";
    for (auto x : g[src])
    {
        if (!vis[x])
        {
            int y = cycle(x, src);
            if (y)
            {
                return y;
            }
        }
        else
        {
            if (x == parr)
                continue;
            par[x] = src;
            return src;
        }
    }

    return 0;
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

    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            int x = cycle(i, -1);
            if (x)
            {
                vector<int> ans;
                ans.pb(x);
                int y = par[x];
                while (y != x)
                {
                    ans.pb(y);
                    y = par[y];
                }
                ans.pb(x);
                cout << ans.size() << endl;
                for (auto x : ans)
                    cout << x << " ";
                return;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
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
