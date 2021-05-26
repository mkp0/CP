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
#define F first
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;
const int MAX = 200010;
vector<pair<ll, ll>> wt; // store wt
vector<int> g[MAX];
ll dp[MAX][2];
int n;

void dfs(int src, int par)
{
    for (auto x : g[src])
    {
        if (x != par)
        {
            dfs(x, src);
            dp[src][0] += max(abs(wt[x].F - wt[src].F) + dp[x][0], abs(wt[x].S - wt[src].F) + dp[x][1]);
            dp[src][1] += max(abs(wt[x].F - wt[src].S) + dp[x][0], abs(wt[x].S - wt[src].S) + dp[x][1]);
        }
    }
}

void solve()
{
    cin >> n;
    wt.clear();
    wt.pb({0, 0});

    loop(i, 1, n, 1)
    {
        int l, r;
        cin >> l >> r;
        wt.pb({l, r});
        g[i].clear();
        dp[i][0] = dp[i][1] = 0;
    }

    loop(i, 1, n - 1, 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    // dfs to calculate ans we consider root as 1

    dfs(1, 0);

    cout << max(dp[1][0], dp[1][1]) << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}