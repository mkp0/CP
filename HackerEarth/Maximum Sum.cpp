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

void solve()
{
    ll n, ans = 0, e = 0;
    cin >> n;
    ll mi = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        if (temp >= 0)
        {
            ans += temp;
            e++;
        }
        mi = max(temp, mi);
    }

    if (mi <= 0)
    {
        if (mi == 0)
        {
            e--;
        }
        cout << mi << " " << e + 1 << endl;
        return;
    }
    else
    {
        cout << ans << " " << e << endl;
    }
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