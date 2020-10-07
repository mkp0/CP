#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll x = (n * b) / (a + b);
    ll ans1, ans2, ans;
    ans1 = (a * x * x) + (b * (n - x) * (n - x));
    x++;
    ans2 = (a * x * x) + (b * (n - x) * (n - x));

    ans = min(ans1, ans2);
    cout << ans << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}