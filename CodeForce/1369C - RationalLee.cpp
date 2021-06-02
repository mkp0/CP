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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    vector<int> wt(k);
    for (auto &x : arr)
        cin >> x;

    for (auto &x : wt)
        cin >> x;

    sort(all(arr), greater<int>());
    sort(all(wt));

    ll ans = 0;

    for (int i = 0; i < k; i++)
    {
        ans += arr[i];
        wt[i]--;
        if (wt[i] == 0)
        {
            ans += arr[i];
        }
    }

    int pt = n - 1;

    for (int i = k - 1; i >= 0; i--)
    {
        ll x = INT_MAX;
        while (wt[i] > 0)
        {
            x = min(x, arr[pt] * 1LL);
            wt[i]--;
            pt--;
        }
        if (x != INT_MAX)
            ans += x;
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