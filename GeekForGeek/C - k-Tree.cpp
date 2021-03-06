#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k, d;
    cin >> n >> k >> d;

    ll dp[n + 1][2];

    dp[0][0] = 1;
    dp[0][1] = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 0;
        for (int j = 1; j <= k; j++)
        {
            if (j > i)
                break;

            if (j < d)
            {
                dp[i][0] = (dp[i][0] + dp[i - j][0]) % mod;
                dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
            }
            else
            {
                dp[i][1] = (dp[i][1] + dp[i - j][1] + dp[i - j][0]) % mod;
            }
        }
    }

    cout << dp[n][1] << "\n";
    return 0;
}