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

vector<int> g[100002];
vector<int> discover(100002);
vector<bool> vis(100002);
vector<bool> AP(100002);
vector<int> lowestAncestor(100002);

int timer = 0;
int ans = 0;
void dfs(int src, int par)
{
    vis[src] = true;
    int child = 0;
    timer++;
    discover[src] = timer;
    lowestAncestor[src] = timer;

    for (auto &x : g[src])
    {
        if (x == par)
            continue;
        if (vis[x])
            lowestAncestor[src] = min(lowestAncestor[src], discover[x]);
        else
        {
            child++;
            dfs(x, src);
            lowestAncestor[src] = min(lowestAncestor[src], lowestAncestor[x]);
            if (par != -1 && lowestAncestor[x] >= discover[src])
                AP[src] = true;
            if (par == -1 && child > 1)
                AP[src] = true;
        }
    }
}

void solve(int v, int e)
{
    for (int i = 0; i <= v; i++)
    {
        vis[i] = false;
        g[i].clear();
        lowestAncestor[i] = 0;
        discover[i] = 0;
        AP[i] = false;
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
    ans = 0;

    for (int i = 1; i <= v; i++)
    {
        if (AP[i])
        {
            ans++;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    while (1)
    {
        int x, y;
        cin >> x >> y;
        if (!x && !y)
            return 0;
        solve(x, y);
    }
    return 0;
}