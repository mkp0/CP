#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mini(a, b, c) min(c, min(a, b))
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define MOD 1e9 + 7
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

void solve()
{
    int n, p;
    ll X, k;
    cin >> n >> X >> p >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    if (v[p - 1] == X)
    {
        cout << 0 << endl;
    }
    else if (k >= p && v[p - 1] >= X)
    {
        int temp = p - 1;
        while (v[temp] > X && temp >= 0)
        {
            temp--;
        }
        cout << abs(temp + 1 - p) << endl;
    }
    else if (k <= p && v[p - 1] <= X)
    {
        int temp = p - 1;
        while (v[temp] < X && temp < v.size())
        {
            temp++;
        }
        cout << abs(temp + 1 - p) << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    // if (X > v[p - 1] && k > p)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    // if (X < v[p - 1] && k < p)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    // int ans = 0;
    // k--;
    // p--;
    // if (X > v[p])
    // {
    //     cout << X << " x ";
    //     while (v[p] <= X && p < n)
    //     {
    //         p++;
    //         ans++;
    //     }
    //     cout << abs(ans) << endl;
    //     return;
    // }
    // else
    // {
    //     while (v[p - 1] >= X && p >= 0)
    //     {
    //         p--;
    //         ans++;
    //     }
    //     cout << ans << endl;
    // }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}