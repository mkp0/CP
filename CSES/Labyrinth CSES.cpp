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

const int nax = 1e3 + 10;
bool vis[nax][nax];
char last[nax][nax];
// n , m row and column respectively
// sx , sy source points
// ex , ey destination points
int sx, sy, ex, ey, n, m;

bool valid(int x, int y)
{
    if (x >= 0 && y >= 0 && x < n && y < m && !vis[x][y])
        return 1;
    return 0;
}
void bfs()
{
    vis[sx][sy] = 1;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        if (x == ex && y == ey)
        {
            string s;
            cout << "YES\n";
            while (x != sx || y != sy)
            {
                s += last[x][y];
                if (last[x][y] == 'U')
                    x++;
                else if (last[x][y] == 'D')
                    x--;
                else if (last[x][y] == 'L')
                    y++;
                else
                    y--;
            }
            reverse(s.begin(), s.end());
            cout << s.size() << "\n"
                 << s;
            exit(0);
        }
        if (valid(x - 1, y))
            vis[x - 1][y] = 1, last[x - 1][y] = 'U', q.push({x - 1, y});
        if (valid(x + 1, y))
            vis[x + 1][y] = 1, last[x + 1][y] = 'D', q.push({x + 1, y});
        if (valid(x, y - 1))
            vis[x][y - 1] = 1, last[x][y - 1] = 'L', q.push({x, y - 1});
        if (valid(x, y + 1))
            vis[x][y + 1] = 1, last[x][y + 1] = 'R', q.push({x, y + 1});
    }
    return;
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'A')
                sx = i, sy = j;
            else if (s[j] == 'B')
                ex = i, ey = j;
            else if (s[j] == '#')
                vis[i][j] = 1;
        }
    }
    bfs();
    cout << "NO";
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