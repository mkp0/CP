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

int bfs(vector<int> g[], vector<bool> &vis, int src)
{
    int ret = 0;

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        ret++;
        int f = q.front();
        q.pop();
        for (auto x : g[f])
        {
            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
            }
        }
    }

    return ret;
}

void solve()
{
    int v, e;
    cin >> v >> e;

    vector<int> g[v];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<bool> vis(v, false);

    ll ans = v;
    ans = ans * (ans - 1) / 2;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            ll val = bfs(g, vis, i);
            ans -= (val) * (val - 1) / 2;
        }
    }

    cout << ans << endl;
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