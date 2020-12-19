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

int mat[2001][2001];

int n;
int func(int x, int r, int c)
{
    if (x > n)
    {
        return 0;
    }
    if (mat[r][c] == x)
    {
        return 0;
    }
    int a = 0, b = 0, c1 = 0, d = 0;

    if (x == 0)
    {
        if (mat[r - 1][c] != (x + 1))
        {
            a = 1 + func(x + 1, r - 1, c);
            mat[r - 1][c] = x + 1;
        }
        if (mat[r + 1][c] != (x + 1))
        {
            b = 1 + func(x + 1, r + 1, c);
            mat[r + 1][c] = x + 1;
        }
        if (mat[r][c + 1] != (x + 1))
        {
            c1 = 1 + func(x + 1, r, c + 1);
            mat[r][c + 1] = x + 1;
        }
        if (mat[r][c - 1] != (x + 1))
        {
            d = 1 + func(x + 1, r, c - 1);
            mat[r][c - 1] = x + 1;
        }
    }
    else
    {
        if (mat[r][c - 1] != (x + 1))
        {
            a = 1 + func(x + 1, r, c - 1);
            mat[r][c - 1] = x + 1;
        }
        if (mat[r][c + 1] != (x + 1))
        {
            b = 1 + func(x + 1, r, c + 1);
            mat[r][c + 1] = x + 1;
        }
    }

    return (a + b + c1 + d);
}

void solve()
{
    memset(mat, -1, sizeof(mat));
    cin >> n;

    cout << func(0, 1000, 1000) << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}