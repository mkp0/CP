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

int dfs(int src, int dep, vector<int> &vis, vector<int> g[])
{
    if (vis[src])
    {
        return 0;
    }
    vis[src] = 1;
    int tempans = 0;
    for (auto x : g[src])
    {
        if (!vis[x])
        {
            tempans = max(tempans, dep + dfs(x, 1, vis, g));
        }
    }

    return max(tempans, 1);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> g[n];
    set<int> s;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            s.insert(i);
            continue;
        }
        x--;
        g[x].pb(i);
    }

    int ans = 0;

    while (!s.empty())
    {
        vector<int> vis(n);
        ans = max(ans, dfs(*s.begin(), 1, vis, g));
        s.erase(*s.begin());
    }

    cout << ans << " \n";
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