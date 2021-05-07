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
    ll n, m, x;
    cin >> n >> m >> x;
    vector<pair<int, int>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());
    vector<int> ans(n);

    ll mi = LONG_MAX;
    ll ma = LONG_MIN;

    for (int i = 0; i < m; i++)
    {
        ll su = 0;
        for (int j = i; j < n; j += m)
        {
            su += arr[j].first;
            ans[arr[j].second] = i + 1;
        }
        mi = min(mi, su);
        ma = max(ma, su);
    }

    if (ma - mi > x)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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