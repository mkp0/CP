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
    string s;
    cin >> s;

    bool is = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a')
        {
            is = false;
            break;
        }
    }

    if (is)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[s.size() - 1 - i] != 'a' && !is)
        {
            cout << 'a';
            is = true;
        }
        cout << s[i];
    }
    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}