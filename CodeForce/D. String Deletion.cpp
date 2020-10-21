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
char buf[200043];
void solve()
{
    int n;
    string s;
    cin >> n >> s;

    reverse(s.begin(), s.end());

    int cn = 0, p = 0, res = 0;

    while (s.size())
    {
        res++;

        char act = s.back();
        cn = 0;

        while (s.size() && s.back() == act)
        {
            cn++;
            s.pop_back();
        }

        p++;
        p -= min(p, cn - 1);
    }

    cout << res - p / 2 << endl;
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