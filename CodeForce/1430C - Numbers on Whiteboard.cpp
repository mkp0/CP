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
    cout << 2 << endl;

    if (n == 2)
    {
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (i == n - 1)
            {
                cout << n - 2 << " " << n << endl;
            }
            else if (i == n - 2)
            {
                cout << n - 1 << " " << n - 1 << endl;
            }
            else
            {
                cout << i + 2 << " " << i << endl;
            }
        }
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