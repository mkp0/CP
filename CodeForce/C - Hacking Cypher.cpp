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
    string s;
    cin >> s;
    ll n = s.size();
    ll a, b;
    cin >> a >> b;

    vector<ll> s1(n);
    ll r = 0, p = 1;
    for (int i = 0; i < n; i++)
    {
        r = (r * 10 + (s[i] - '0')) % a;
        s1[i] = r;
    }
    r = 0;

    for (int i = n - 1; i >= 1; i--)
    {
        r = (r + (s[i] - '0') * p) % b;
        p *= 10;
        p %= b;
        if (r == 0 && s1[i - 1] == 0 && s[i] != '0')
        {
            cout << "YES" << endl
                 << s.substr(0, i) << endl
                 << s.substr(i, n - i);
            return;
        }
    }
    cout << "NO\n";
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