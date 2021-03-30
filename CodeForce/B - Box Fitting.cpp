#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

void solve()
{
    int n, w;
    cin >> n >> w;
    int bitt[31] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        bitt[(int)log2(temp)]++;
    }

    int ans = 0;
    while (n)
    {
        int wl = w;
        for (int i = 30; i >= 0; i--)
        {
            while (bitt[i] && (wl - (1 << i)) >= 0)
            {
                bitt[i]--;
                n--;
                wl -= 1 << i;
            }
        }
        ans++;
    }

    cout << ans << "\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}