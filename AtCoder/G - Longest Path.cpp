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
#define MOD 1e9 + 7
using namespace std;

//stringMul String Multiplication ,  trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */
vector<int> dp;
vector<bool> vis;

void dfs(int src, vector<int> g[])
{

    vis[src] = true;

    for (auto x : g[src])
    {
        if (!vis[x])
        {
            dfs(x, g);
        }
        dp[src] = max(dp[src], dp[x] + 1);
    }
}

void solve()
{
    dp.clear();
    vis.clear();
    int v, e;
    cin >> v >> e;
    dp.resize(v, 0);
    vis.resize(v, false);

    vector<int> g[v];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
    }

    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
            dfs(i, g);
    }

    int ans = 0;

    for (int i = 0; i < v; i++)
        ans = max(ans, dp[i]);

    cout << ans << endl;
}

int32_t main()
{
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