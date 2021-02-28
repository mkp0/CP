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
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
        if (i != 0)
            v[i] += v[i - 1];
    }

    ll ans = 0;
    if (v[n - 1] % 3)
    {
        cout << 0 << "\n";
        return;
    }

    int co = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[n - 1] / 3 * 2)
        {
            co++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[n - 1] / 3 * 2)
        {
            co--;
        }
        if (v[i] * 3 == v[n - 1])
        {
            ans += co;
        }
    }

    cout << ans << "\n";
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}