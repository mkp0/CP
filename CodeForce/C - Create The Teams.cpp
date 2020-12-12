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
ll n, x;
int dp[100001];

int func(vector<int> &v, int ind, int l)
{
    if (ind < 0)
    {
        return 0;
    }

    if (dp[ind] != -1)
    {
        return dp[ind];
    }

    int ans = 0;

    if (v[ind] >= x || (l * v[ind]) >= x)
    {
        ans = 1 + func(v, ind - 1, 1);
    }
    else
    {
        ans = func(v, ind - 1, l + 1);
    }

    dp[ind] = ans;

    return ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> x;
    vector<int> v(n);

    for (auto &x : v)
    {
        cin >> x;
    }

    sort(v.begin(), v.end());

    cout << func(v, n - 1, 1) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
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