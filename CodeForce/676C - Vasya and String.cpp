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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            b[i] = 1;
        }
        else
        {
            a[i] = 1;
        }
        if (i)
        {
            b[i] += b[i - 1];
            a[i] += a[i - 1];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;

        if (s[i] == 'a')
        {
            x = upper_bound(a.begin(), a.end(), a[i] + k) - a.begin();
            y = upper_bound(b.begin(), b.end(), b[i] + k - 1) - b.begin();
        }
        else
        {
            x = upper_bound(a.begin(), a.end(), a[i] + k - 1) - a.begin();
            y = upper_bound(b.begin(), b.end(), b[i] + k) - b.begin();
        }
        ans = max(ans, x - i);
        ans = max(ans, y - i);
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