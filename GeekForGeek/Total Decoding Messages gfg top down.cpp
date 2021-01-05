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

int dp[101];

int func(string s, int n)
{
    if (n < 0)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    int a1 = 0, a2 = 0;
    if (s[n] > '0')
    {
        a1 = func(s, n - 1);
    }
    if (n > 0)
    {
        if (s[n - 1] == '1')
            a2 = func(s, n - 2);
        if (s[n - 1] == '2' && s[n] >= '0' && s[n] <= '6')
            a2 = func(s, n - 2);
    }

    dp[n] = a1 + a2;

    return a1 + a2;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));

    cout << func(s, n - 1) << endl;
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