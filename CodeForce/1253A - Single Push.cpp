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
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int diff = 0;
    bool ok = true;
    bool ok1 = false;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] - b[i] == 0 && diff)
        {
            ok1 = true;
        }
        if (ok1 && a[i] - b[i] != 0)
        {
            ok = false;
        }
        if (a[i] > b[i])
        {
            ok = false;
        }
        if (!diff && (a[i] - b[i]))
        {
            diff = a[i] - b[i];
        }
        else if (diff && (a[i] - b[i]) != diff && (a[i] - b[i] != 0))
        {
            ok = false;
        }
    }

    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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