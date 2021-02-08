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
    ll A, B, n;
    cin >> A >> B >> n;

    bool ok = false;
    ll su = 0;

    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].first;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        ll temp = (a[i].second + A - 1) / A;
        ll x = temp * a[i].first;
        su += temp * a[i].first;
        if (su > B)
        {
            ok = true;
            if (i == (n - 1) && (su - a[i].first) < B)
            {
                ok = false;
            }
        }
    }

    if (ok)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
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