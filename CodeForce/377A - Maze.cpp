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
int n, m, s;
int vis[555][555];
char str[555][555];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
vector<pair<int, int>> store;

void dfs(int x, int y)
{
    if (vis[x][y] != 0 || (str[x][y] == '#'))
        return;

    vis[x][y] = 1;
    store.pb({x, y});

    for (int i = 0; i < 4; i++)
    {
        if (x + dx[i] < 0 || x + dx[i] >= n || y + dy[i] < 0 || y + dy[i] >= m)
            continue;
        dfs(x + dx[i], y + dy[i]);
    }
}

void solve()
{
    cin >> n >> m >> s;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> str[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == '.')
            {
                dfs(i, j);
                reverse(store.begin(), store.end());
                for (int k = 0; k < s; k++)
                {
                    str[store[k].first][store[k].second] = 'X';
                }

                for (int a = 0; a < n; a++)
                {
                    for (int b = 0; b < m; b++)
                    {
                        cout << str[a][b];
                    }
                    cout << "\n";
                }
                return;
            }
        }
    }
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