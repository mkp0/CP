#include <bits/stdc++.h>
using namespace std;

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n, c;
    cin >> n >> c;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int dp[c + 1];
    for (int i = 0; i <= c; i++)
    {
        dp[i] = 0;
    };
    dp[0] = 1;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (arr[i] > j)
            {
                continue;
            }
            else
            {
                dp[j] = dp[j] + dp[j - arr[i]];
            }
        }
    }

    if (dp[c])
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}