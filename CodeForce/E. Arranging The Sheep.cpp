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

int mod = 1e9 + 7;
ll n;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> left(n + 2), right(n + 2);

    ll l = 0;

    for (int i = 1; i <= n; i++)
    {
        left[i] = left[i - 1];
        if (s[i - 1] == '*')
            l++;
        else
            left[i] += l;
    }
    l = 0;
    for (int i = n; i >= 1; i--)
    {
        right[i] = right[i + 1];
        if (s[i - 1] == '*')
            l++;
        else
            right[i] += l;
    }

    ll ans = 9999999999999L;

    for (int i = 1; i <= n; i++)
    {

        ans = min(ans, left[i] + right[i]);
    }
    cout << ans << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}