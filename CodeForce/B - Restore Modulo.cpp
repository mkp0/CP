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
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    ll c = -1, mc = 1;

    for (ll i = 2; i <= n; i++)
    {
        ll temp = arr[i] - arr[i - 1];
        if (temp > 0)
        {
            if (c == -1 || temp == c)
            {
                c = temp;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        else
        {
            if (mc == 1 || temp == mc)
            {
                mc = temp;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (c == -1 || mc == 1)
    {
        cout << 0 << endl;
        return;
    }
    mc = -mc;
    if (arr[1] > mc + c)
    {
        cout << -1 << endl;
        return;
    }

    for (ll i = 2; i <= n; i++)
    {
        if ((arr[1] + (i - 1) * c) % (mc + c) != arr[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << mc + c << " " << c << "\n";
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