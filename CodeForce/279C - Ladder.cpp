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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);

    vector<int> increse(n + 1);
    vector<int> decrease(n + 1);

    loop(i, 1, n, 1)
    {
        cin >> arr[i];
        if (arr[i] >= arr[i - 1])
            increse[i] += increse[i - 1] + 1;
        else
            increse[i] = 1;

        if (arr[i] <= arr[i - 1])
            decrease[i] += decrease[i - 1] + 1;
        else
            decrease[i] = 1;
    }

    while (k--)
    {
        int l, r;
        cin >> l >> r;

        r -= decrease[r] - 1;
        r -= increse[r] - 1;
        if (r <= l)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "No\n";
        }
    }
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