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
    ll n;
    cin >> n;
    ll arrx[n];
    ll arry[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrx[i];
        cin >> arry[i];
    }

    sort(arrx, arrx + n);
    sort(arry, arry + n);

    if (n % 2)
    {
        cout << 1 << "\n";
        return;
    }

    cout << (arrx[n / 2] - arrx[(n / 2) - 1] + 1) * (arry[n / 2] - arry[(n / 2) - 1] + 1) << "\n";
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