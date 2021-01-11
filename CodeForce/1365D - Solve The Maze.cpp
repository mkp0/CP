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
int maza[55][55];
int block[55][55];
int vis[55][55];

int n, m;

void dfs(int x, int y)
{
    if (x < 1 || y < 1 || x > n || y > m || vis[x][y] || block[x][y])
        return;
    vis[x][y] = true;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

void solve()
{

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            maza[i][j] = 0;
            block[i][j] = 0;
            vis[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char x;
            cin >> x;
            if (x == 'B')
                block[i - 1][j] = 1, block[i + 1][j] = 1, block[i][j - 1] = 1, block[i][j + 1] = 1;
            if (x == 'G')
                maza[i][j] = 1;
            if (x == '#')
                block[i][j] = 1;
        }
    }

    dfs(n, m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (maza[i][j] == 1 && !vis[i][j])
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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