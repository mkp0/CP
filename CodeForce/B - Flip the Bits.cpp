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
    string a, b;
    cin >> a >> b;

    bool is = true;
    vector<int> ones(n);
    vector<int> zero(n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            is = false;
        }
        if (a[i] == '1')
        {
            ones[i] = 1;
            zero[i] = 0;
        }
        else
        {
            zero[i] = 1;
            ones[i] = 0;
        }
        if (i)
        {
            ones[i] += ones[i - 1];
            zero[i] += zero[i - 1];
        }
    }

    int r = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == '1')
            a[i] -= r;
        else
            a[i] += r;
        if ((a[i] != b[i]) && (ones[i] != zero[i]))
        {
            cout << "NO\n";
            return;
        }
        else if (a[i] != b[i])
        {
            r++;
            r %= 2;
        }
    }

    cout << "YES\n";
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