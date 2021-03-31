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

int su(int n)
{
    int x = 0;
    while (n)
    {
        x += n % 10;
        n /= 10;
    }
    return x;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> ans;

    int j = 19;

    for (int i = 0; i < n; i++)
    {
        while (su(j) != 10)
        {
            j += 9;
        }
        ans.push_back(j);
        j += 9;
    }

    cout << ans[n - 1] << " ";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}