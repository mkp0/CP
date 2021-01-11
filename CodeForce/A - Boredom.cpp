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

    int n;
    cin >> n;
    map<int, int> m;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        maxi = max(temp, maxi);
        m[temp]++;
    }
    ll dp[maxi + 2];
    memset(dp, 0, sizeof(dp));

    dp[0] = 0;
    dp[1] = m[1];

    ll ans = dp[1];

    for (int i = 2; i <= maxi; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + (m[i] * 1ll * i));
        ans = max(ans, dp[i]);
    }

    cout << ans << "\n";
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}