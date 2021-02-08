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

string func(string s)
{
    int st = 0;
    int ed = s.size();

    string ans;
    ans.pb(s[0]);

    for (int i = 1; i < ed; i++)
    {
        int x = i, y = i - 1;

        string temp1, temp2;

        while (y >= 0 && x < ed && (s[x] == s[y]))
        {
            temp1.clear();
            for (int i = y; i <= x; i++)
            {
                temp1.push_back(s[i]);
            }
            y--;
            x++;
        }

        if (ans.size() < temp1.size())
        {
            ans = temp1;
        }

        x = i + 1, y = i - 1;
        while (y >= 0 && x < ed && (s[x] == s[y]))
        {
            temp2.clear();
            for (int i = y; i <= x; i++)
            {
                temp2.push_back(s[i]);
            }
            y--;
            x++;
        }
        if (ans.size() < temp2.size())
        {
            ans = temp2;
        }
    }

    return ans;
}

void solve()
{
    string s;
    cin >> s;

    cout << func(s) << endl;
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