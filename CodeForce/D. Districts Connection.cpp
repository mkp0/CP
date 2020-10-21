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
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ind = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            ind = i;
        }
    }

    if (ind == -1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
    }

    vector<pair<int, int>> res;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            res.push_back({1, i + 1});
        }
        else
        {
            res.push_back({i + 1, ind + 1});
        }
    }

    for (auto x : res)
    {
        cout << x.second << " " << x.first << endl;
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
        solve();
}