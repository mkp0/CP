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
    int n, q, k;
    cin >> n >> q >> k;
    int arr[n + 2];
    ll store[n + 2];

    arr[0] = 1;
    arr[n + 1] = k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    store[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        store[i] = arr[i + 1] - arr[i - 1] - 2;
        store[i] += store[i - 1];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        ll su = store[b - 1] - store[a];

        su += arr[a + 1] - 2;

        su += k - arr[b - 1] - 1;

        cout << su << "\n";
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