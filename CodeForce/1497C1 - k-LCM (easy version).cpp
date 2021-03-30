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
    if (n == 4)
    {
        cout << 2 << " " << 1 << " " << 1 << endl;
        return;
    }
    if (n % 2 == 1)
    {
        cout << 1 << " " << n / 2 << " " << n / 2;
    }
    else
    {
        if (n % 2 == 0 && n % 4 != 0 && n % 8 != 0)
        {
            cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2;
        }
        else if (n % 4 == 0 && n % 8 != 0)
        {
            cout << 4 << " " << (n - 4) / 2 << " " << (n - 4) / 2;
        }
        else
        {
            cout << n / 2 << " " << (n - n / 2) / 2 << " " << (n - n / 2) / 2;
        }
    }
    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}