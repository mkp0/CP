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
int nCrModp(int n, int r, int p)
{
    if (r > n - r)
        r = n - r;

    int C[r + 1];
    memset(C, 0, sizeof(C));

    C[0] = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = min(i, r); j > 0; j--)

            C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}

void solve()
{
    int mod = 1e9 + 7;
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (auto &x : arr)
        cin >> x;

    sort(arr.begin(), arr.end(), greater<int>());

    ll ans = 0;

    int diffs = 0;
    int diffe = k - 1;

    for (int i = k - 1; i < n; i++)
    {
        if (arr[k - 1] == arr[i])
        {
            diffe = i;
        }
        else
        {
            break;
        }
    }

    for (int i = k - 1; i >= 0; i--)
    {
        if (arr[i] == arr[k - 1])
        {
            diffs = i;
        }
        else
        {
            break;
        }
    }

    ll st = k - 1 - diffs + 1;
    ll ed = diffe - diffs + 1;

    cout << nCrModp(ed, st, mod) << "\n";
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