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
ll n, k;

/* I'm gonna be the King of the Pirates */
ll mod = 1e9 + 7;
ll val = 0;

bool safe(ll mi, vector<ll> &arr)
{
    deque<ll> dq;
    dq.push_back(arr[0]);
    ll su = arr[0];

    loop(i, 1, n - 1, 1)
    {
        su += arr[i];
        dq.push_back(arr[i]);
        ll temp = arr[i] * dq.size() - su;
        while (temp > k)
        {
            su -= dq.front();
            dq.pop_front();
            temp = arr[i] * dq.size() - su;
        }
        if (dq.size() >= mi)
        {
            val = arr[i];
            return true;
        }
    }

    return false;
}

void solve()
{
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &x : arr)
        cin >> x;

    sort(all(arr));
    ll lo = 1; // min possible ans
    ll hi = n; // max possible ans
    ll ans = 1;
    val = arr[0];
    while (hi >= lo)
    {
        ll mi = (hi + lo) / 2;
        if (safe(mi, arr))
        {
            ans = mi;
            lo = mi + 1;
        }
        else
            hi = mi - 1;
    }

    cout << ans << " " << val << endl;
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