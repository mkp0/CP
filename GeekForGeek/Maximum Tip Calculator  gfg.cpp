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

int dp[105][105];

int func(vector<int> v1, vector<int> v2, int n, int a, int b)
{
    if (n < 0)
        return 0;

    if (dp[a][b] != -1)
        return dp[a][b];

    int left = 0, right = 0;
    if (a)
    {
        left = v1[n] + func(v1, v2, n - 1, a - 1, b);
    }
    if (b)
    {
        right = v2[n] + func(v1, v2, n - 1, a, b - 1);
    }

    dp[a][b] = max(left, right);
    return dp[a][b];
}

void solve()
{
    int n, n1, n2;
    cin >> n >> n1 >> n2;

    memset(dp, -1, sizeof(dp));

    vector<int> v1(n), v2(n);

    for (auto &x : v1)
        cin >> x;

    for (auto &x : v2)
        cin >> x;

    cout << func(v1, v2, n - 1, n1, n2) << endl;
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