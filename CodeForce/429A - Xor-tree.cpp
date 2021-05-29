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
const int MAXX = 1e5 + 1;
vector<int> g[MAXX];
int visited[MAXX];
int n;
vector<int> initalval;
vector<int> finalval;
vector<int> ans;

void dfs(int src, int dist, int odd, int even)
{
    visited[src] = true;

    // only way to  flip a node value if after doing previos operation it is not equal to dest value

    if (dist % 2)
    {
        if ((initalval[src] + odd) % 2 != finalval[src])
        {
            ans.pb(src);
            odd++;
        }
    }
    else
    {
        if ((initalval[src] + even) % 2 != finalval[src])
        {
            ans.pb(src);
            even++;
        }
    }

    for (auto x : g[src])
    {
        if (!visited[x])
        {
            dfs(x, dist + 1, odd, even);
        }
    }
}

void solve()
{
    cin >> n;

    loop(i, 1, n - 1, 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    initalval.pb(0);
    finalval.pb(0);

    loop(i, 1, n, 1)
    {
        int x;
        cin >> x;
        initalval.pb(x);
    }

    loop(i, 1, n, 1)
    {
        int x;
        cin >> x;
        finalval.pb(x);
    }
    dfs(1, 1, 0, 0);

    cout << ans.size() << "\n";

    for (auto &x : ans)
    {
        cout << x << "\n";
    }
    cout << endl;
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