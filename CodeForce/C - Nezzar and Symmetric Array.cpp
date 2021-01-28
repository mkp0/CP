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
    ll n;
    cin >> n;
    ll x = 2 * n;
    map<ll, ll> m;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }

    vector<ll> v;
    for (auto x : m)
    {
        if (x.second != 2)
        {
            cout << "NO\n";
            return;
        }
        v.pb(x.first);
    }

    sort(v.begin(), v.end(), greater<ll>());

    set<ll> s;
    ll su = v[0];

    if (su % x != 0)
    {
        cout << "NO\n";
        return;
    }

    su = v[0] / x;
    s.insert(v[0] / x);
    x -= 2;

    for (ll i = 1; i < n; i++)
    {
        v[i] -= 2 * su;
        if (v[i] <= 0 || v[i] % x != 0)
        {
            cout << "NO\n";
            return;
        }
        su += v[i] / x;
        x -= 2;
    }

    cout << "YES\n";
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