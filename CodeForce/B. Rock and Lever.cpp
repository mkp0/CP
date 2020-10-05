#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll msd(ll n)
{
    ll t = 0;
    while (n)
    {
        n /= 2;
        t++;
    }
    return t;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            ll n, x;
            cin >> n;
            x = msd(n);
            m[x]++;
        }
        ll ans = 0;
        for (auto x : m)
        {
            ans += x.second * (x.second - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}