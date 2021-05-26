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
const int MAX = 220021;
vector<int> adj[MAX - 1];
int dp[MAX - 1][2];

void dfs(int src, int par)
{
    bool isChild = true;
    for (auto &x : adj[src])
    {
        if (x != par)
        {
            isChild = false;
            dfs(x, src);
        }
    }

    if (isChild)
        return;

    dp[src][0] = dp[src][1] = 0;
    for (auto &x : adj[src])
    {
        if (x != par)
            dp[src][0] += max(dp[x][0], dp[x][1]); // always add the max value of children
    }

    for (auto &x : adj[src])
    {
        if (x != par)
        {
            dp[src][1] = max(dp[src][1], 1 + dp[x][0] + dp[src][0] - max(dp[x][0], dp[x][1])); // dp[src][0] contain max value of sum of all and we are including a children so we need to remove it from that sum
        }
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
        adj[x].pb(y);
        adj[y].pb(x);
    }

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
    while (t--)
    {
        solve();
    }
    return 0;
}