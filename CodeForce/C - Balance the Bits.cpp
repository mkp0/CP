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
    int n;
    string s;
    cin >> n >> s;
    string a, b;
    int zero = 0;
    int co = 0;
    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero++;
            if (co)
            {
                a[i] = '(';
                b[i] = ')';
            }
            else
            {
                b[i] = '(';
                a[i] = ')';
            }
            co ^= 1;
        }
    }

    if ((s[0] != s[n - 1]) || (zero % 2) || (s[0] == '0'))
    {
        cout << "NO\n";
        return;
    }

    zero /= 2;
    int op = n / 2 - zero;
    cout << "YES\n";

    for (int i = 0; i < n; i++)
    {
        if (op && s[i] == '1')
        {
            a[i] = '(';
            b[i] = '(';
            op--;
        }
        else if (s[i] == '1')
        {
            a[i] = ')';
            b[i] = ')';
        }
    }

    cout << a << "\n"
         << b << "\n";
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