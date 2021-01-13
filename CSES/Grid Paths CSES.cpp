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
    int mod = 1e9 + 7;
    int n;
    cin >> n;
    char s[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> s[i][j];
    }

    int dp[n][n];

    if (s[0][0] == '*')
    {
        cout << 0 << endl;
        return;
    }

    dp[0][0] = 1;

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = 0;
        dp[0][i] = 0;
        if (s[i][0] == '.' && dp[i - 1][0] == 1)
        {
            dp[i][0] = 1;
        }

        if (s[0][i] == '.' && dp[0][i - 1] == 1)
        {
            dp[0][i] = 1;
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            if (s[i][j] == '*')
                dp[i][j] = 0;
        }
    }

    cout << dp[n - 1][n - 1] << "\n";
}

int32_t main()
{
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