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

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
        }
        else
        {
            if (s[i] == 'z')
                s[i] = 'y';
            else
                s[i] = 'z';
        }
    }

    cout << s << "\n";
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