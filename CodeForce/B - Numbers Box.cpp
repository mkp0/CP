#include <bits/stdc++.h>

using namespace std;

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    int ans = 0;
    int neg = 0;
    int zero = 0;
    int small = INT_MAX;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            ans += abs(mat[i][j]);
            if (mat[i][j] < 0)
            {
                neg++;
            }
            if (mat[i][j] == 0)
            {
                zero++;
            }
            if (abs(mat[i][j]) < small)
            {
                small = abs(mat[i][j]);
            }
        }
    }
    if (neg % 2 == 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans - abs(2 * small) << endl;
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