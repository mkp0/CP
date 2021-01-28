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
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    int maxe = INT_MIN;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxe = max(maxe, arr[i]);
    }

    vector<int> cnt(maxe + 1, 0);
    vector<int> dp(maxe + 1, 0);

    for (auto x : arr)
        cnt[x]++;

    int ans = INT_MIN;
    for (int i = 1; i <= maxe; i++)
    {
        dp[i] += cnt[i];
        if (cnt[i])
        {
            for (int j = i + i; j <= maxe; j += i)
            {
                dp[j] = max(dp[j], dp[i]);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << n - ans << "\n";
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}