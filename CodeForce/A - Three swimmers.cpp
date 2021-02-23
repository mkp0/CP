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
    ll p, a, b, c;
    cin >> p >> a >> b >> c;

    if (p == 0)
    {
        cout << 0 << "\n";
        return;
    }

    if (p > a)
    {
        if (p % a == 0)
            a = (p / a) * 1LL * a;
        else
            a += (p / a) * 1LL * a;
    }
    if (p > b)
    {
        if (p % b == 0)
            b = (p / b) * 1LL * b;
        else
            b += (p / b) * 1LL * b;
    }
    if (p > c)
    {
        if (p % c == 0)
            c = (p / c) * 1LL * c;
        else
            c += (p / c) * 1LL * c;
    }

    ll ans = min({a - p, b - p, c - p});

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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}