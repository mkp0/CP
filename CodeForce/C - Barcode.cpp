#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define llinf 1e18
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))

using namespace std;

/* I'm gonna be the King of the Pirates */
int mod = 1e9 + 7;
int n, m, x, y;
char mat[1001][1001];
int hashCo[1001][2];
int dp[1001][2];
void solve()
{
    cin >> n >> m >> x >> y;

    loop(i, 1, n, 1)
    {
        loop(j, 1, m, 1)
        {
            cin >> mat[i][j];
        }
    }

    hashCo[0][0] = hashCo[0][1] = 0;
    dp[0][0] = dp[0][1] = 0;

    loop(j, 1, m, 1)
    {
        hashCo[j][1] = hashCo[j][0] = 0;
        dp[j][1] = dp[j][0] = inf;
        loop(i, 1, n, 1)
        {
            if (mat[i][j] == '#')
                hashCo[j][1]++;
            else
                hashCo[j][0]++;
        }
        hashCo[j][1] += hashCo[j - 1][1]; // prefix sum of
        hashCo[j][0] += hashCo[j - 1][0];
    }

    loop(i, x, m, 1)
    {
        loop(j, x, y, 1)
        {
            if (j <= i)
            {
                dp[i][1] = min(dp[i][1], hashCo[i][1] - hashCo[i - j][1] + dp[i - j][0]);
                dp[i][0] = min(dp[i][0], hashCo[i][0] - hashCo[i - j][0] + dp[i - j][1]);
            }
        }
    }

    cout << min(dp[m][0], dp[m][1]) << "\n";
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