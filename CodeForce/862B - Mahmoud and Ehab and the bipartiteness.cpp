#include <bits/stdc++.h>

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
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

vector<int> g[100000 + 5];
vector<int> vis(100000 + 5);
long long color[2];

void dfs(int s, int c)
{
    if (vis[s])
    {
        return;
    }
    color[c]++;
    vis[s]++;

    for (auto x : g[s])
    {
        if (!vis[x])
        {
            dfs(x, c ^ 1);
        }
    }
}

void solve()
{
    int v;
    cin >> v;

    for (int i = 1; i < v; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    dfs(1, 0);

    cout << color[0] * color[1] - v + 1 << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}