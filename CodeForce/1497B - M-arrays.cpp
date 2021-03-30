#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];

    map<ll, ll> ma;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] % m;
        ma[arr[i]]++;
    }
    ll ans = 0;

    for (auto x : ma)
    {
        if (x.first == 0)
        {
            ans++;
        }
        else if (2 * x.first == m)
        {
            ans++;
        }
        else if (x.second)
        {
            ans++;
            ll temp = abs(ma[x.first] - ma[m - x.first]);
            ans += max(temp - 1, 0 * 1LL);
            ma[x.first] = 0;
            ma[m - x.first] = 0;
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
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}