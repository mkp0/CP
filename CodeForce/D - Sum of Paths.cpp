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
ll mod = 1e9 + 7;
ll dp[5002][5002];
ll ic[5002]; //individual contribution
ll sum;
ll arr[5002];

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    sum = 0;

    for (int i = 1; i <= n; i++)
        dp[i][0] = 1;

    for (int j = 1; j <= k; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            dp[i][j] = (dp[i + 1][j - 1] + dp[i - 1][j - 1]) % mod;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            ic[i] += (dp[i][j] * dp[i][k - j]);
            ic[i] = ic[i] % mod;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += (arr[i] * ic[i]);
        sum = sum % mod;
    }

    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
        sum -= (ic[a] * arr[a] % mod);
        arr[a] = b;
        sum += (arr[a] * ic[a] + mod);
        sum = sum % mod;
        cout << sum << endl;
    }
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