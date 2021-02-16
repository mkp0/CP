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

ll cubes[10001];

void fun()
{
    cubes[0] = 0;
    for (ll i = 1; i <= 10000; i++)
    {
        cubes[i] = 0;
        cubes[i] = i * i * i;
    }
}

int binarySearch(int l, int r, ll x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (cubes[m] == x)
            return m;

        if (cubes[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

void solve()
{
    ll n;
    cin >> n;

    for (ll i = 1; i <= 10000; i++)
    {
        ll x = cubes[i];

        if (x >= n)
        {
            cout << "NO\n";
            return;
        }

        ll y = n - x;
        if (binarySearch(1, 10000, y) > 0)
        {
            cout << "YES\n";
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    fun();
    while (t--)
    {
        solve();
    }
    return 0;
}