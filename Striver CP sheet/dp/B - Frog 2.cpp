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
    int n, k;
    cin >> n >> k;
    int arr[n];
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dp[1] = abs(arr[1] - arr[0]);

    for (int i = 2; i < n; i++)
    {
        int mi = INT_MAX, j = 0;
        if (i - k >= 0)
        {
            j = i - k;
        }
        for (; j < i; j++)
        {
            mi = min(dp[j] + abs(arr[j] - arr[i]), mi);
        }
        dp[i] = mi;
    }
    cout << dp[n - 1] << endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
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