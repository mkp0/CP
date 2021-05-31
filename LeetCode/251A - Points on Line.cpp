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
    ll n, d;
    cin >> n >> d;
    vector<ll> arr(n);

    for (auto &x : arr)
        cin >> x;

    multiset<ll> ms;

    ll ans = 0;

    for (auto &x : arr)
    {
        if (!ms.empty())
        {
            while (((x - *ms.begin()) > d) && !ms.empty())
            {
                ans += (ms.size() - 1) * 1LL * (ms.size() - 2) / 2;
                ms.erase(ms.begin());
            }
        }
        ms.insert(x);
    }

    while (!ms.empty())
    {
        ans += (ms.size() - 1) * 1LL * (ms.size() - 2) / 2;
        ms.erase(ms.begin());
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