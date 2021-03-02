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
    ll arr[n];

    ll neg = 0, zer = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zer++;
        }
        else if (arr[i] < 0)
        {
            ans += abs(arr[i] + 1);
            neg++;
        }
        else
        {
            ans += (arr[i] - 1);
        }
    }

    if (neg % 2 == 0 || zer)
    {
        cout << ans + zer << "\n";
    }
    else
    {
        cout << ans + 2 << "\n";
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}