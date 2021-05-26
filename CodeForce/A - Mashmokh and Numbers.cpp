#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define llinf 1e18
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))

using namespace std;

/* I'm gonna be the King of the Pirates */
int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    if ((n <= 1 && k > 0) || (k < n / 2))
    {
        cout << -1 << "\n";
        return;
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int conse = (n - 2) / 2; // pts due to consecutive elements

    k -= conse;

    cout << k << " " << 2 * k << " ";

    loop(i, 1, n - 2, 1)
    {
        cout << 2 * k + i << " ";
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