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

bool isbip(int src, int color, vector<int> g[], vector<bool> &vis, vector<int> &col)
{
    col[src] = color;
    vis[src] = true;

    for (auto x : g[src])
    {
        if (!vis[x])
        {
            if (!isbip(x, color ^ 1, g, vis, col))
            {
                return false;
            }
        }
        else
        {
            if (col[src] == col[x])
            {
                return false;
            }
        }
    }
    return true;
}

void solve()
{
    int v, e;
    cin >> v >> e;
    vector<int> g[v];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<bool> vis(v, false);
    vector<int> col(v, 0);

    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            if (!isbip(i, 0, g, vis, col))
            {
                cout << "Suspicious bugs found!\n";
                return;
            }
        }
    }

    cout << "No suspicious bugs found!\n";
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Scenario #" << i + 1 << ":\n";
        solve();
    }
    return 0;
}