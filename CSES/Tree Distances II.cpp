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
const int MAX = 200001;
vector<ll> g[MAX];
vector<ll> sizeTree(MAX, 1);
vector<ll> subtree(MAX, 0);
vector<ll> ans(MAX, 0);

void dfs(ll src, ll par)
{
    for (auto x : g[src])
    {
        if (x != par)
        {
            dfs(x, src);
            sizeTree[src] += sizeTree[x];
            subtree[src] += (sizeTree[x] + subtree[x]);
        }
    }
}
ll n;

void solve(ll src, ll par, ll partialans)
{
    ans[src] = (subtree[src] + (partialans + (n - sizeTree[src]))); // we calculate ans for subtree but for paraent we need partial ans which does not include src

    for (auto x : g[src])
    {
        if (x != par)
        {
            solve(x, src, ans[src] - subtree[x] - sizeTree[x]);
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

    dfs(1, 0);      // use to calculate all subtree and sum of all subtree size
    solve(1, 0, 0); // here we are calculating our ans

    loop(i, 1, n, 1)
    {
        cout << ans[i] << " ";
    }
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