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
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool pos;

    if (arr[1] - arr[0] > 0)
    {
        pos = true;
    }
    else
    {
        pos = false;
    }

    vector<int> ans;
    ans.pb(arr[0]);

    for (int i = 1; i + 1 < n; i++)
    {
        while (pos && i + 1 < n)
        {
            if (arr[i] - arr[i + 1] < 0)
            {
                i++;
            }
            else
            {
                ans.pb(arr[i]);
                pos = false;
            }
        }
        while (!pos && i + 1 < n)
        {
            if (arr[i] - arr[i + 1] > 0)
            {
                i++;
            }
            else
            {
                ans.pb(arr[i]);
                pos = true;
            }
        }
    }

    ans.pb(arr[n - 1]);

    cout << ans.size() << "\n";

    for (auto x : ans)
    {
        cout << x << " ";
    }

    cout << "\n";
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