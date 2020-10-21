#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mini(a, b, c) min(c, min(a, b))
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define MOD 1e9 + 7
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void solve()
{
    ll n;
    cin >> n;

    ll ans = fact(n);
    ans /= (n / 2);
    ans /= (n / 2);
    ans /= 2;

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
    solve();
}