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
    string res;
    cin >> res;
    ll l = 0, r = 1e13; // smallest and largest
    ll nb, ns, nc;      // bread ,sause ,chease aLready have
    cin >> nb >> ns >> nc;
    ll pb, ps, pc; // price of bread , sause , chease
    cin >> pb >> ps >> pc;
    ll pri; // money have
    cin >> pri;
    ll ans = 0;

    ll b, s, c;

    b = count(res.begin(), res.end(), 'B');
    s = count(res.begin(), res.end(), 'S');
    c = count(res.begin(), res.end(), 'C');

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll mon = max(0 * 1LL, mid * b - nb) * pb + max(0 * 1LL, mid * s - ns) * ps + max(0 * 1LL, mid * c - nc) * pc;
        if (mon <= pri)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}