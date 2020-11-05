#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define MOD 1e9 + 7
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

/* I am gonna be the King of the Pirates */

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    if (sum == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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