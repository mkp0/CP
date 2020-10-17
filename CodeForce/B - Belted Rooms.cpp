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
    ll n, a = 0, b = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '>')
        {
            a++;
        }
        else if (s[i] == '<')
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    if ((a + c) == n || (b + c) == n)
    {
        cout << n << endl;
        return;
    }

    if (s[0] == '-' || s[n - 1] == '-')
    {
        ans++;
    }
    else if (s[0] == s[n - 1] && ((b + c) == n || (a + c) == n))
    {
        ans++;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '-' || s[i - 1] == '-')
        {
            ans++;
        }
        else if (s[i] == s[i - 1] && ((b + c) == n || (a + c) == n))
        {
            ans++;
        }
    }

    cout << ans << endl;
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