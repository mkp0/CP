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
    ll a, b;
    cin >> a >> b;

    ll ans = a;

    if (b >= a)
    {
        cout << 1 << "\n";
    }
    else
    {
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                ll x, y;
                x = i;
                y = a / x;

                if (x <= b)
                    ans = min(ans, a / x);
                if (y <= b)
                    ans = min(ans, a / y);
            }
        }

        cout << ans << " \n";
    }
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