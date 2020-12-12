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

ll dp[300001][2];

ll func(vi &arr, int n, int i, bool is)
{
    if (i >= n)
    {
        return 0;
    }

    if (dp[i][is] != -1)
    {
        return dp[i][is];
    }

    ll a, b;

    if (is)
    {
        a = arr[i] + func(arr, n, i + 1, !is);
    }
    else
    {
        a = -arr[i] + func(arr, n, i + 1, !is);
    }

    b = func(arr, n, i + 1, is);

    dp[i][is] = max(a, b);

    return dp[i][is];
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vi arr(n);
    memset(dp, -1, sizeof(dp));

    for (auto &x : arr)
    {
        cin >> x;
    }

    cout << func(arr, n, 0, true) << endl;
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