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
int r, c, x, y, co;
int mat[101][101];

// trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void func(int v, int a, int b)
{
    // cout << a << " " << b << "x";
    if (mat[a][b] != v)
    {
        // cout << "a";
        return;
    }

    if (a >= r || a < 0)
    {
        // cout << "b";

        return;
    }
    if (b >= c || b < 0)
    {
        // cout << "c";

        return;
    }

    mat[a][b] = co;

    func(v, a + 1, b);
    func(v, a - 1, b);
    func(v, a, b + 1);
    func(v, a, b - 1);
}

void solve()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
            // cout << "hi";
        }
    }

    cin >> x >> y >> co;

    func(mat[x][y], x, y);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     ios::sync_with_stdio(0);
    //     cin.tie(0);
    //     cout.tie(0);

    // cout << "hi";
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}