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
    set<int> s;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxi = max(maxi, x);
        s.insert(x);
    }

    for (int i = 1; i <= 1024 * 2; i++)
    {
        bool is = true;
        set<int> temp;

        for (auto x : s)
        {
            temp.insert(x ^ i);
        }

        auto x = temp.begin();
        auto y = s.begin();

        while (x != temp.end() || y != s.end())
        {
            if ((*x) != (*y))
            {
                is = false;
                break;
            }
            x++;
            y++;
        }
        if (x == temp.end() && y == s.end() && is)
        {
            cout << i << "\n";
            return;
        }
    }

    cout << -1 << " \n";
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