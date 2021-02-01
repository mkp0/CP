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
    ll n, k;
    cin >> n >> k;
    ll A[n];

    for (ll i = 0; i < n; i++)
        cin >> A[i];

    ll ans = 0;

    ll pref = 0;

    for (ll i = 1; i < n; i++)
    {
        pref += A[i - 1];
        if ((pref * 1LL * k) < (1LL * 100 * A[i]))
        {
            ll D = ceil(((1LL * 100 * A[i]) - (pref * 1LL * k)) / (k * 1.0));
            ans += D;
            pref += D;
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