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
    int x = n - k + 3;
    if (x == 4 && k == 3)
    {
        cout << 2 << " " << 1 << " " << 1 << endl;
        return;
    }
    if (x % 2)
    {
        cout << 1 << " " << (x - 1) / 2 << " " << (x - 1) / 2 << " ";
    }
    else if (x % 8 == 0)
    {
        cout << x / 2 << " " << x / 4 << " " << x / 4 << " ";
    }
    else if (x % 4 == 0)
    {
        cout << 4 << " " << (x - 4) / 2 << " " << (x - 4) / 2 << " ";
    }
    else
    {
        cout << 2 << " " << (x - 2) / 2 << " " << (x - 2) / 2 << " ";
    }
    for (int i = 3; i < k; i++)
    {
        cout << 1 << " ";
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}