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

using namespace std;
ll mod = 998244353;

//stringMul String Multiplication ,  trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */
ll coo, coe, can;

ll fastExpo(ll a, ll b)
{
    ll x = 1;
    a %= mod;
    while (b)
    {
        if (b & 1)
            x = x * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return x;
}

void dfs(int src, vector<int> g[], vector<bool> &vis, int col, vector<int> &c)
{
    vis[src] = true;
    c[src] = col;
    if (col % 2 == 0)
        coe++;
    else
        coo++;

    for (auto x : g[src])
    {
        if (!vis[x])
        {
            dfs(x, g, vis, col ^ 1, c);
        }
        else
        {
            if (c[src] == c[x])
            {
                can = false;
                return;
            }
        }
    }
}

void solve()
{
    int v, e;
    cin >> v >> e;
    vector<int> g[v + 1];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<bool> vis(v + 1, false);
    vector<int> c(v + 1, 0);

    ll ans = 1;
    for (int i = 1; i <= v; i++)
    {

        if (!vis[i])
        {
            coo = 0;
            coe = 0;
            can = 1;
            dfs(i, g, vis, 0, c);
            if (can)
            {
                ans = (ans * (fastExpo(2, coo) + fastExpo(2, coe))) % mod;
            }
            else
            {
                cout << 0 << endl;
                return;
            }
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}