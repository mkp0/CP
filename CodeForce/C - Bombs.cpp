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

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<pair<int, pair<int, int>>> arr(n);
    for (auto &[x, y] : arr)
    {
        auto &[a, b] = y;
        cin >> a >> b;
        if (a)
        {
            ans += 2;
        }
        if (b)
        {
            ans += 2;
        }
        ans += 2;
        x = abs(a) + abs(b);
    }
    sort(arr.begin(), arr.end());
    cout << ans << endl;

    for (auto [x, y] : arr)
    {
        auto [a, b] = y;
        if (a > 0)
        {
            cout << 1 << " " << a << " R\n";
        }
        if (a < 0)
        {
            cout << 1 << " " << abs(a) << " L\n";
        }
        if (b > 0)
        {
            cout << 1 << " " << b << " U\n";
        }
        if (b < 0)
        {
            cout << 1 << " " << abs(b) << " D\n";
        }
        cout << 2 << endl;
        if (a > 0)
        {
            cout << 1 << " " << a << " L\n";
        }
        if (a < 0)
        {
            cout << 1 << " " << abs(a) << " R\n";
        }
        if (b > 0)
        {
            cout << 1 << " " << b << " D\n";
        }
        if (b < 0)
        {
            cout << 1 << " " << abs(b) << " U\n";
        }
        cout << 3 << endl;
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