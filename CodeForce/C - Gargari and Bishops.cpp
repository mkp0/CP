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
    ll n;
    cin >> n;
    ll mat[n + 1][n + 1];
    map<ll, ll> m1, m2;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
            m1[i - j] += mat[i][j];
            m2[i + j] += mat[i][j];
        }
    }

    priority_queue<pair<ll, pair<ll, ll>>> pq;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            mat[i][j] = m1[i - j] + m2[i + j] - mat[i][j];
            pq.push({mat[i][j], {i, j}});
        }
    }

    ll ans = 0;
    vector<pair<ll, ll>> v;
    bool vis[2] = {0, 0};
    ll co = 2;

    while (co)
    {
        auto [a1, b1] = pq.top().second;
        ll pos = (a1 + b1) % 2;
        if (!vis[pos])
        {
            v.push_back({a1, b1});
            vis[pos] = true;
            co--;
            ans += pq.top().first;
        }
        pq.pop();
    }

    cout << ans << "\n";

    for (auto x : v)
    {
        cout << x.first << " " << x.second << " ";
    }
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