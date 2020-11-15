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

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < m; i++)
    {
        int x = 1;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                if ((a[i][j] % 2 == 1) && (j % 2 == 0))
                {
                    a[i][j] += x;
                }
                else if ((a[i][j] % 2 == 0) && (j % 2 == 1))
                {
                    a[i][j] += x;
                }
            }
            else
            {
                if ((a[i][j] % 2 == 0) && (j % 2 == 0))
                {
                    a[i][j] += x;
                }
                else if ((a[i][j] % 2 == 1) && (j % 2 == 1))
                {
                    a[i][j] += x;
                }
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
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
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}