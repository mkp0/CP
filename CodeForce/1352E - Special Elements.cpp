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
    vector<int> arr(n + 1);

    int ans = 0;

    set<int> s;

    int co[n + 1];

    for (int i = 0; i <= n; i++)
        co[i] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        co[arr[i]]++;

        arr[i] = arr[i - 1] + arr[i];
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            int prefsum = arr[i] - arr[j - 1];
            if (prefsum <= n && co[prefsum])
                s.insert(prefsum);
        }
    }

    for (auto x : s)
    {
        ans += co[x];
    }

    cout << ans << " \n";
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