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
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);

    loop(i, 1, n, 1)
    {
        cin >> arr[i - 1].F;
        arr[i - 1].S = i;
    }

    sort(all(arr));

    vector<int> team1, team2;

    loop(i, 1, n, 1)
    {
        if (i % 2)
            team1.pb(arr[i - 1].S);
        else
            team2.pb(arr[i - 1].S);
    }

    cout << team1.size() << "\n";

    for (auto x : team1)
        cout << x << " ";
    cout << endl;

    cout << team2.size() << "\n";

    for (auto &x : team2)
        cout << x << " ";
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
    while (t--)
    {
        solve();
    }
    return 0;
}