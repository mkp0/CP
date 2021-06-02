#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
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

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> ma;

    queue<pair<int, int>> q;
    q.push({n, 0});

    int ans = 0;

    while (!q.empty())
    {
        auto [a, b] = q.front();
        q.pop();
        if (a == m)
        {
            cout << b << endl;
            return;
        }
        ma[a] = true;
        if (!ma[a - 1] && ((a - 1) > 0))
        {
            q.push({a - 1, b + 1});
        }
        if (!ma[a * 2] && (a * 2 < 90000))
        {
            q.push({a * 2, b + 1});
        }
    }
    cout << -1 << endl;
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