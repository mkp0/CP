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
ll mod = 998244353;
ll po(ll x, ll os)
{
    if (os == 0)
        return 1;

    ll z = po(x, os / 2);

    if (os & 1)
        return z * z % mod * x % mod;

    return z * z % mod;
}

ll modInv(ll x) { return po(x, mod - 2); }

void solve()
{
    ll n;
    cin >> n;

    ll dp[n + 1];

    dp[0] = 0;
    dp[1] = 1;
    ll pow_2 = 1;

    for (ll i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        pow_2 = (pow_2 * 2) % mod;
    }

    cout << (1ll * dp[n] * modInv(po(2, n))) % mod << endl;
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