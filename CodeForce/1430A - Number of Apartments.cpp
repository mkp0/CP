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

// int x, y, x;
bool is;

int func(int n, int a, int b, int c)
{
    if (n == 0)
    {
        cout << a << " " << b << " " << c << endl;
        is = true;
        return 0;
    }
    if (n - 3 >= 0 && !is)
    {
        func(n - 3, a + 1, b, c);
    }
    if (n - 5 >= 0 && !is)
    {
        func(n - 5, a, b + 1, c);
    }
    if (n - 7 >= 0 && !is)
    {
        func(n - 7, a, b, c + 1);
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    is = false;

    func(n, 0, 0, 0);

    if (!is)
    {
        cout << -1 << endl;
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