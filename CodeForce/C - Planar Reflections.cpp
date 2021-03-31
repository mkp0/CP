#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;
int dp[1001][1001];
int n, k;

int func(int n1, int k1)
{
    if (k1 == 1 || n1 == 0)
    {
        return 1;
    }
    if (dp[n1][k1] != -1)
    {
        return dp[n1][k1] % mod;
    }

    dp[n1][k1] = (func(n1 - 1, k1) + func(n - n1, k1 - 1)) % mod;

    return dp[n1][k1] % mod;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> k;
    cout << func(n, k) % mod << "\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}