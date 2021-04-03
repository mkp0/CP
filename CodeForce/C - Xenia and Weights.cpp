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
string s;
int k;
int ans[2000];

int dfs(int cal, int diff)
{
    if (cal > k)
    {
        cout << "YES\n";
        for (int i = 1; i <= k; i++)
        {
            cout << ans[i] << " ";
        }
        return 1;
    }
    else
    {
        for (int i = diff; i < 10; i++)
        {
            if (s[i] > '0' && (ans[cal - 1] != i + 1))
            {
                ans[cal] = i + 1;
                if (dfs(cal + 1, i + 1 - diff))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void solve()
{
    cin >> s;
    cin >> k;

    if (!dfs(1, 0))
    {
        cout << "NO\n";
    }
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