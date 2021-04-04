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

struct comp_pair_int
{
    bool operator()(const pair<int, int> &a, const int &b)
    {
        return (a.first < b);
    }
    bool operator()(const int &a, const pair<int, int> &b)
    {
        return (a < b.first);
    }
};

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};
    }

    sort(arr.begin() + 1, arr.end());

    for (int i = 1; i <= n; i++)
    {
        arr[i].second += arr[i - 1].second;
    }

    ll ans = 0;

    for (int i = 1; i <= n; i++)
    {
        auto x = upper_bound(arr.begin(), arr.end(), arr[i].first + k - 1, comp_pair_int());
        x = prev(x);
        ans = max(ans, (*x).second - arr[i - 1].second);
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}