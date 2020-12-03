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
    int n, p, k;
    cin >> n >> p >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        v[i] = c - '0';
    }

    int dp[n + 1] = {0};
    int x, y;
    cin >> x >> y;

    for (int i = n - 1; i >= p - 1; i--)
    {
        if (v[i] == 0)
        {
            dp[i + 1] += x;
        }

        if (i + k < n)
        {
            dp[i + 1] += dp[i + 1 + k];
        }

        // cout << dp[i + 1] << " ";
    }

    int ans = INT_MAX;

    for (int i = p, j = 0; i <= n; i++, j += y)
    {
        ans = min(ans, j + dp[i]);
    }

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