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
    int a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    bool is = false;
    if (a1 == a2 && !is)
    {
        if ((b1 + b2) == a1)
        {
            is = true;
        }
    }
    if (a1 == b2 && !is)
    {
        if ((b1 + a2) == a1)
        {
            is = true;
        }
    }
    if (b1 == a2 && !is)
    {
        if ((a1 + b2) == b1)
        {
            is = true;
        }
    }
    if (b1 == b2 && !is)
    {
        if ((a1 + a2) == b1)
        {
            is = true;
        }
    }

    if (is)
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