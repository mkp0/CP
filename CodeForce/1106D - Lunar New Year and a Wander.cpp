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
vector<int> ans;
set<int> s;

void dfs(vector<int> g[], vector<bool> &vis)
{
    int u = *s.begin();
    s.erase(u);
    vis[u] = true;
    ans.push_back(u);

    for (auto x : g[u])
    {
        if (!vis[x])
            s.insert(x);
    }
    if (!s.empty())
    {
        dfs(g, vis);
    }
}

void solve()
{
    ans.clear();
    int v, e;
    cin >> v >> e;
    vector<int> g[v + 1];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }

    vector<bool> vis(v + 1, false);
    s.insert(1);
    dfs(g, vis);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
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