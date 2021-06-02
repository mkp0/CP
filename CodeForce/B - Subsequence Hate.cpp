#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
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

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<int> pref(n + 2, 0);
    vector<int> suff(n + 2, 0);

    for (int i = 0; i < n; i++)
    {
        pref[i + 1] += pref[i] + (s[i] - '0');
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == (n - 1))
        {
            suff[i + 1] = (s[i] - '0');
            continue;
        }
        suff[i + 1] += suff[i + 2] + (s[i] - '0');
    }

    int ans = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        ans = min(ans, pref[i] + suff[i + 1]);
        ans = min(ans, (i - pref[i]) + suff[i + 1]);
        ans = min(ans, pref[i] + ((n - i) - suff[i + 1]));
        ans = min(ans, (i - pref[i]) + ((n - i) - suff[i + 1]));
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