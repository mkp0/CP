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

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int dp[x + 1];
    for (int i = 0; i <= x; i++)
    {
        dp[i] = INT_MAX;
    }

    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j >= arr[i])
            {
                if (dp[j - arr[i]] == INT_MAX)
                {
                    continue;
                }
                dp[j] = min(dp[j], 1 + dp[j - arr[i]]);
            }
        }
    }

    if (dp[x] == INT_MAX)
    {
        cout << -1 << "\n";
        return;
    }

    cout << dp[x] << "\n";
}

int32_t main()
{

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