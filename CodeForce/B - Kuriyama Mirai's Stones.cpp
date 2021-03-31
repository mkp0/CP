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
    int n;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l, r;
        cin >> l >> r;
        if (x == 1)
        {
            cout << a[r] - a[l - 1] << "\n";
        }
        else
        {
            cout << b[r] - b[l - 1] << "\n";
        }
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