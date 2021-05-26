#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;
const int MAX = 222222;
vector<int> g[MAX];
vector<int> downpath(MAX);

void dfs1(int src, int par)
{
    bool isleaf = true;
    for (auto x : g[src])
    {
        if (x == par)
            continue;
        else
        {
            isleaf = false;
            dfs1(x, src);
        }
    }
    downpath[src] = 0;
    if (isleaf)
        return;
    for (auto x : g[src])
    {
        if (x == par)
            continue;
        downpath[src] = max(downpath[src], downpath[x] + 1);
    }
}
int ans = 0;

void dfs(int src, int par)
{
    vector<int> childd;
    for (auto &x : g[src])
    {
        if (x != par)
        {
            dfs(x, src);
            childd.pb(downpath[x]);
        }
    }

    sort(all(childd));
    reverse(all(childd));

    if (childd.size() == 1)
    {
        ans = max(ans, 1 + childd[0]);
    }
    else if (childd.size() > 1)
    {
        ans = max(ans, 1 + childd[0] + 1 + childd[1]);
    }
}

void solve()
{
    int n;
    cin >> n;

    loop(i, 1, n - 1, 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    // calculating downpath
    dfs1(1, 0);

    // dfs to solve problem
    dfs(1, 0);

    cout << ans << endl;
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