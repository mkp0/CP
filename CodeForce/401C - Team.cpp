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
    int z, o;
    cin >> z >> o;

    if (2 * z + 2 < o || (z - o) > 1)
    {
        cout << -1 << endl;
        return;
    }

    int prev = -1;
    while (z || o)
    {
        if (2 * z <= o)
        {
            cout << 110;
            o -= 2;
            z -= 1;
            prev = 0;
        }
        else
        {
            if (prev == 0)
            {
                cout << 1;
                prev = 1;
                o--;
            }
            else
            {
                cout << 0;
                prev = 0;
                z--;
            }
        }
        if (z == 0 || o == 0)
        {
            while (z)
            {
                cout << 0;
                z--;
            }
            while (o)
            {
                cout << 1;
                o--;
            }
        }
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