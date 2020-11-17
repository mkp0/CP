#include <bits/stdc++.h>
using namespace std;

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = arr[0];
    if (n == 1)
    {
        cout << arr[0] << endl;
        return;
    }
    dp[2] = max(arr[0], arr[1]);

    for (int i = 3; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], arr[i - 1] + dp[i - 2]);
    }

    cout << dp[n] << endl;
    return;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}