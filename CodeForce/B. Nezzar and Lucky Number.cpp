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

bool islucky(int a, int d)
{
    while (a)
    {
        int digi = a % 10;
        a /= 10;
        if (digi == d)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n, d;
    cin >> n >> d;

    vector<int> dp(d * 10, 0);

    for (int i = 1; i <= d * 10; i++)
    {
        // cout << i << " ";
        if (islucky(i, d))
        {
            dp[i] = 1;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (dp[j] && islucky(i - j, d))
                {
                    dp[i] = 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x >= d * 10)
        {
            cout << "YES\n";
        }
        else
        {
            if (dp[x])
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}