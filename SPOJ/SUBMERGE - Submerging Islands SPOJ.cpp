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

int tim = 0;
void AP(int u, vector<int> g[], vector<bool> &vis, vector<int> &dis, vector<int> &low, vector<int> &par, vector<bool> &ap)
{
    int child = 0;
    vis[u] = true;
    dis[u] = low[u] = ++tim;

    for (auto x : g[u])
    {
        if (!vis[x])
        {
            child++;
            par[x] = u;
            AP(x, g, vis, dis, low, par, ap);
            low[u] = min(low[x], low[u]);
            if (par[u] == -1 && child > 1)
            {
                ap[u] = true;
            }
            if (par[u] != -1 && low[x] >= dis[u])
            {
                ap[u] = true;
            }
        }
        else if (x != par[u])
        {
            low[u] = min(low[u], dis[x]);
        }
    }
}

void solve(int x, int y)
{
    int v, e;
    v = x, e = y;
    vector<int> g[v];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    vector<bool> vis(v, false);
    vector<int> dis(v, -1);
    vector<int> low(v, -1);
    vector<int> par(v, -1);
    vector<bool> ap(v, false);

    tim = 0;

    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            AP(i, g, vis, dis, low, par, ap);
        }
    }

    int co = 0;

    for (int i = 0; i < v; i++)
    {
        if (ap[i] == true)
            co++;
    }

    cout << co << endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            return 0;
        solve(a, b);
    }
    return 0;
}