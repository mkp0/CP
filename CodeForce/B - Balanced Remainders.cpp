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
    int n;
    cin >> n;
    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x = x % 3;
        if (x == 0)
        {
            c1++;
        }
        else if (x == 1)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }

    n = n / 3;

    int su = 0;

    if (c1 - n > 0)
    {
        if (c2 - n < 0)
        {
            int v = min(c1 - n, n - c2);
            c1 -= v;
            c2 += v;
            su += v;
        }
        if (c3 - n < 0)
        {
            int v = min(c1 - n, n - c3);
            c1 -= v;
            c3 += v;
            su += v * 2;
        }
    }
    if (c2 - n > 0)
    {
        if (c1 - n < 0)
        {
            int v = min(c2 - n, n - c1);
            c1 += v;
            c2 -= v;
            su += v * 2;
        }
        if (c3 - n < 0)
        {
            int v = min(c2 - n, n - c3);
            c2 -= v;
            c3 += v;
            su += v;
        }
    }
    if (c3 - n > 0)
    {
        if (c2 - n < 0)
        {
            int v = min(c3 - n, n - c2);
            c3 -= v;
            c2 += v;
            su += v * 2;
        }
        if (c1 - n < 0)
        {
            int v = min(c3 - n, n - c1);
            c3 -= v;
            c1 += v;
            su += v;
        }
    }

    cout << su << "\n";
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