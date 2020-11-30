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

// trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    char mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int a = mat[0][1] - '0';
    int b = mat[1][0] - '0';
    int c = mat[n - 1][n - 2] - '0';
    int d = mat[n - 2][n - 1] - '0';

    if (abs(a + b - c - d) == 2)
    {
        cout << 0 << endl;
    }
    else if (a + b == 1 && c + d == 1)
    {
        cout << 2 << endl;
        if (a == 0)
        {
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            cout << 2 << " " << 1 << endl;
        }
        if (c == 1)
        {
            cout << n << " " << n - 1 << endl;
        }
        else
        {
            cout << n - 1 << " " << n << endl;
        }
    }
    else if (a + b == c + d)
    {
        cout << 2 << endl;
        cout << 2 << " " << 1 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
        if (a + b + c + d == 3)
        {
            if (a + b == 1)
            {
                if (a == 1)
                {
                    cout << 1 << " " << 2 << endl;
                }
                else
                {
                    cout << 2 << " " << 1 << endl;
                }
            }
            else
            {
                if (c == 1)
                {
                    cout << n << " " << n - 1 << endl;
                }
                else
                {
                    cout << n - 1 << " " << n << endl;
                }
            }
        }
        else
        {
            if (a + b == 1)
            {
                if (a == 0)
                {
                    cout << 1 << " " << 2 << endl;
                }
                else
                {
                    cout << 2 << " " << 1 << endl;
                }
            }
            else
            {
                if (c == 0)
                {
                    cout << n << " " << n - 1 << endl;
                }
                else
                {
                    cout << n - 1 << " " << n << endl;
                }
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}