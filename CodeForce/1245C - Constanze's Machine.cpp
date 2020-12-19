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
// #define MOD 1e9 + 7
using namespace std;
const int mod = 1e9 + 7;
//stringMul String Multiplication ,  trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

int dp[200001];

int madd(int a, int b)
{
    a = a % mod;
    b = b % mod;

    return (a + b) % mod;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int dp[n + 1];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'w' || s[i] == 'm')
        {
            cout << 0 << endl;
            return;
        }
    }

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        if ((s[i - 1] == s[i - 2]) && (s[i - 1] == 'n' || s[i - 1] == 'u'))
        {
            dp[i] = madd(dp[i - 1], dp[i - 2]);
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }

    cout << dp[n] << endl;
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