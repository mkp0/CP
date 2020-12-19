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

ll dp[100001][2];
int n;
ll func(vector<ll> &x, vector<ll> &y, int ind, int turn)
{
    if (ind < 0)
        return 0;
    if (dp[ind][turn] != -1)
        return dp[ind][turn];

    ll ans = func(x, y, ind - 1, turn);
    if (turn == 0)
    {
        ans = max(ans, x[ind] + func(x, y, ind - 1, 1));
    }
    else
    {
        ans = max(ans, y[ind] + func(x, y, ind - 1, 0));
    }

    dp[ind][turn] = ans;
    return ans;
}

void solve()
{
    cin >> n;
    vll a(n), b(n);
    memset(dp, -1, sizeof(dp));
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    ll x = func(a, b, n - 1, 0);
    ll y = func(a, b, n - 1, 1);

    cout << max(x, y) << endl;
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