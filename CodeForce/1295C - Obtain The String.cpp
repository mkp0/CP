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

void solve()
{
    string s, t;
    cin >> s >> t;
    int ss = s.size();
    int ts = t.size();
    int dp[ss + 1][26];

    for (int i = 0; i <= ss; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            dp[i][j] = -1;
        }
    }

    for (int i = ss - 1; i >= 0; i--)
    {
        for (int j = 0; j < 26; j++)
        {
            dp[i][j] = dp[i + 1][j];
        }
        dp[i][s[i] - 'a'] = i;
    }

    int ans = 0, cur = ss - 1;
    for (int i = 0; i < ts; i++)
    {
        if (dp[0][t[i] - 'a'] == -1)
        {
            cout << -1 << endl;
            return;
        }
        if (dp[cur + 1][t[i] - 'a'] == -1)
        {
            ans++;
            cur = dp[0][t[i] - 'a'];
        }
        else
        {
            cur = dp[cur + 1][t[i] - 'a'];
        }
    }

    cout << ans << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}