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

bool check(ll mi, vector<ll> &arr)
{
    ll maxSubpervisor = 0;
    for (auto x : arr)
    {
        maxSubpervisor += (mi - x);
    }

    return maxSubpervisor >= mi;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll lo = 0;    // store the minimum possible game
    ll hi = 1e12; // store the maximum possible game
    for (auto &x : arr)
    {
        cin >> x;
        lo = max(lo, x);
    }

    ll ans = 0;

    while (hi >= lo)
    {
        ll mi = (lo + hi) / 2;

        if (check(mi, arr)) // if true we can play atlease mi game
        {
            hi = mi - 1;
            ans = mi;
        }
        else // we need to play more the mi game
        {
            lo = mi + 1;
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
    while (t--)
    {
        solve();
    }
    return 0;
}