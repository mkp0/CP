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
    unsigned ll a, b, c;
    cin >> a >> b;
    c = b;
    b = max(a, b);
    a = min(a, c);
    c = b / a;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (b % a != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        if ((c & (c - 1)) != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll ans = 0;
            while (c / 8)
            {
                ans++;
                c /= 8;
            }
            while (c / 4)
            {
                ans++;
                c /= 4;
            }
            while (c / 2)
            {
                ans++;
                c /= 2;
            }
            cout << ans << endl;
        }
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}