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
int n, k;
const int MAXX = 50001;
vector<int> g[MAXX];
int dp[MAXX][501];
ll ans = 0;

void dfs(int src, int par)
{
    dp[src][0] = 1; // always exist as element itself at distance 0

    for (auto x : g[src])
    {
        if (x != par)
        {
            dfs(x, src);
            for (int i = 1; i <= k; i++)
            {
                ans += dp[x][i - 1] * 1LL * dp[src][k - i]; // we include in ans if par is x type of p exclude some child and that child contain k-p
            }
            for (int i = 1; i <= k; i++)
            {
                dp[src][i] += dp[x][i - 1]; // children having distance i-1 will make distance i from src
            }
        }
    }
}

void solve()
{
    cin >> n >> k;

    loop(i, 1, n - 1, 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

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