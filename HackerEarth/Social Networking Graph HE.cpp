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

void bfs(int s, int d, vector<int> g[], vector<bool> &vis, vector<int> &dis)
{
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    vis[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto x : g[u])
        {
            if (!vis[x])
            {
                q.push(x);
                dis[x] = dis[u] + 1;
                vis[x] = true;
            }
        }
    }
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
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        vector<bool> vis(v, false);
        vector<int> dis(v, 0);

        bfs(s, d, g, vis, dis);

        int ans = 0;

        for (auto x : dis)
        {
            if (x == d)
                ans++;
        }

        cout << ans << "\n";
    }
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
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}