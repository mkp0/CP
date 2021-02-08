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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();

    int U = 0, D = 0, L = 0, R = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            L++;
        if (s[i] == 'D')
            D++;
        if (s[i] == 'U')
            U++;
        if (s[i] == 'R')
            R++;
    }
    int x = 0, y = 0;
    if (a > 0)
    {
        x = min(R, a);
    }
    else
    {
        x = min(L, abs(a));
    }

    if (b > 0)
    {
        y = min(U, b);
    }
    else
    {
        y = min(D, abs(b));
    }

    if (x == abs(a) && y == abs(b))
    {
        cout << "YES\n";
    }
    else
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