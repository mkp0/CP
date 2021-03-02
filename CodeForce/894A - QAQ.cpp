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

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int dpl[n];
    int dpr[n];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        dpl[i] = 0;
        if (s[i] == 'Q')
        {
            dpl[i] = 1;
        }
        if (i - 1 >= 0)
        {
            dpl[i] += dpl[i - 1];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        dpr[i] = 0;
        if (s[i] == 'Q')
        {
            dpr[i] = 1;
        }
        if (i + 1 < n)
        {
            dpr[i] += dpr[i + 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' && dpl[i])
        {
            ans += dpl[i] * dpr[i];
        }
    }

    cout << ans << "\n";
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
    while (t--)
    {
        solve();
    }
    return 0;
}