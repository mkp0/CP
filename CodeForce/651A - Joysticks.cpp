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
int dp[200][200];

int func(int a, int b)
{
    if (b > a)
    {
        swap(a, b);
    }
    if (dp[a][b] != -1)
    {
        return dp[a][b];
    }
    if (a < 2 || b == 0)
    {
        return 0;
    }
    if (b == 1)
    {
        dp[a][b] = 1 + func(a - 2, b + 1);
        return dp[a][b];
    }
    dp[a][b] = 1 + max(func(a + 1, b - 2), func(a - 2, b + 1));
    return dp[a][b];
}

void solve()
{
    int a, b;
    cin >> a >> b;

    memset(dp, -1, sizeof(dp));

    cout << func(a, b);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}