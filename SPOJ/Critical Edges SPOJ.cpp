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
vector<int> g[7000];
vector<pair<int, int>> ans;
vector<bool> vis(7000);
vector<int> discoverTime(7000);
vector<int> leastAncestorTime(7000);
int timer = 0;
void dfs(int src, int par)
{
    vis[src] = true;
    timer++;
    discoverTime[src] = timer;
    leastAncestorTime[src] = timer;

    for (auto &x : g[src])
    {
        if (x == par)
            continue;
        else if (vis[x])
            leastAncestorTime[src] = min(leastAncestorTime[src], discoverTime[x]);
        else
        {
            dfs(x, src);
            leastAncestorTime[src] = min(leastAncestorTime[src], leastAncestorTime[x]);
            if (leastAncestorTime[x] > discoverTime[src])
            {
                if (x > src)
                {
                    ans.pb({src, x});
                }
                else
                {
                    ans.pb({x, src});
                }
            }
        }
    }
}

void solve(int l)
{
    cout << "Caso #" << l << "\n";
    cin >> v >> e;
    ans.clear();
    for (int i = 0; i <= 700; i++)
    {
        g[i].clear();
        vis[i] = false;
    }

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    timer = 0;
    dfs(1, -1);

    if (!ans.size())
    {
        cout << "Sin bloqueos" << endl;
        return;
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << "\n";
    }
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    cin >> t;
    int i = 1;
    while (t--)
    {
        solve(i);
        i++;
    }
    return 0;
}