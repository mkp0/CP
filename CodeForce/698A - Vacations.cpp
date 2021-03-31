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
int dp[150][10];

int n;
int arr[1000];
int func(int n1, int last)
{
    if (n1 < 0)
    {
        return 0;
    }
    if (dp[n1][last] != -1)
    {
        return dp[n1][last];
    }
    if (arr[n1] == last || arr[n1] == 0)
    {
        dp[n1][last] = 1 + func(n1 - 1, 0);
        return dp[n1][last];
    }
    if (arr[n1] == 3)
    {
        int x = func(n1 - 1, 2);
        int y = func(n1 - 1, 1);
        if (last == 2)
        {
            x++;
        }
        if (last == 1)
            y++;
        dp[n1][last] = min(x, y);
        return dp[n1][last];
    }
    dp[n1][last] = func(n1 - 1, arr[n1]);
    return dp[n1][last];
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << func(n - 1, 0) << endl;
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