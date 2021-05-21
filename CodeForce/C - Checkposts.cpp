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
const int N = 100001;
int n, v;             // v vertics
vector<int> cost;     // store costs
vector<int> g[N];     // store graph
vector<int> rg[N];    // store reversed graph
vector<bool> vis;     // visited tracker
vector<int> order;    // order tracker using dfs1
vector<int> compcost; // store cost of components

void dfs1(int src) // forward graph dfs
{
    vis[src] = true;
    for (auto x : g[src])
    {
        if (!vis[x])
        {
            dfs1(x);
        }
    }
    order.pb(src);
}

void dfs2(int src) // backward graph dfs
{
    vis[src] = true;
    compcost.pb(cost[src]);
    for (auto x : rg[src])
    {
        if (!vis[x])
        {
            dfs2(x);
        }
    }
}

void solve()
{
    cin >> n;
    cost.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        rg[y].pb(x);
    }

    vis.clear();
    vis.resize(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs1(i);
        }
    }

    vis.clear();
    vis.resize(n + 1, false);
    // reverse dfs
    reverse(order.begin(), order.end());
    ll ans = 0;
    ll poss = 1;
    for (int i = 0; i < n; i++)
    {
        if (!vis[order[i]])
        {
            compcost.clear();
            dfs2(order[i]);
            sort(compcost.begin(), compcost.end());
            ll cnt = 1; // cnt no of times smallest no appeared
            for (int i = 1; i < compcost.size(); i++)
            {
                if (compcost[i] == compcost[0])
                    cnt++;
                else
                    break;
            }
            ans += compcost[0];
            poss = (poss * 1LL * cnt) % mod;
        }
    }
    cout << ans << " " << poss << endl;
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