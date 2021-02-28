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
    int n, t;
    cin >> n >> t;
    vector<ll> v;
    v.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        v[i] += v[i - 1];
    }
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int ed = (upper_bound(v.begin() + i, v.end(), v[i - 1] + t) - v.begin());
        ans = max(ed - i, ans);
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