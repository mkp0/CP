#include <bits/stdc++.h>

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
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

vector<int> t;

void precomp()
{
    t.pb(5);
    for (int i = 1; i < 10; i++)
    {
        t.pb((5 * (i + 1)) + t[i - 1]);
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int tL = 240 - k;
    int ans = upper_bound(t.begin(), t.end(), tL) - t.begin();
    cout << min(ans, n);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    precomp();
    while (t--)
    {
        solve();
    }
    return 0;
}