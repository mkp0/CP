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
    int n;
    cin >> n;
    int boy[n];

    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }

    sort(boy, boy + n);
    int m;
    cin >> m;
    int girl[102];

    for (int i = 0; i <= 101; i++)
    {
        girl[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        girl[x]++;
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (girl[boy[i] - 1])
        {
            ans++;
            girl[boy[i] - 1]--;
        }
        else if (girl[boy[i]])
        {
            ans++;
            girl[boy[i]]--;
        }
        else if (girl[boy[i] + 1])
        {
            ans++;
            girl[boy[i] + 1]--;
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