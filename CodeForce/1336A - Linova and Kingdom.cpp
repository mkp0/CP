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

vector<int> subn;
vector<int> h;
vector<int> ans;

void dfs(int u, int p, vector<int> g[])
{
    subn[u] = 1;

    for (auto x : g[u])
    {
        if (x == p)
            continue;
        h[x] = h[u] + 1;

        dfs(x, u, g);
        subn[u] += subn[x];
    }
    ans[u] = h[u] - (subn[u] - 1);
}

void solve()
{
    int v, k;
    cin >> v >> k;
    vector<int> g[v];
    subn.resize(v, 0);
    h.resize(v, 0);
    ans.resize(v, 0);

    for (int i = 0; i < v - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    dfs(0, -1, g);

    sort(ans.begin(), ans.end(), greater<int>());
    ll sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += ans[i];
    }
    cout << sum << endl;
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