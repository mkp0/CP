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

int dp[200001][2];

int func(int arr[], int n, int cur, int turn)
{
    if (cur >= n)
    {
        return 0;
    }

    if (dp[cur][turn] != -1)
    {
        return dp[cur][turn];
    }

    int a1 = INT_MAX, a2 = INT_MAX;
    if (turn == 1)
    {
        a1 = func(arr, n, cur + 1, 0);
        a2 = func(arr, n, cur + 2, 0);
    }
    else
    {
        if (cur < n)
        {
            a1 = arr[cur] + func(arr, n, cur + 1, 1);
        }
        if (cur + 1 < n)
        {
            a2 = arr[cur] + arr[cur + 1] + func(arr, n, cur + 2, 1);
        }
    }

    dp[cur][turn] = min(a1, a2);

    return dp[cur][turn] = min(a1, a2);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = func(arr, n, 0, 0);

    cout << ans << endl;
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