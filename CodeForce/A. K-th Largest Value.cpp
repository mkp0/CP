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
    int n, q;
    cin >> n >> q;

    vector<int> v;

    int co = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        if (x)
            co++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (a == 2)
        {
            if (co >= b)
            {
                cout << 1 << "\n";
            }
            else
            {

                cout << 0 << "\n";
            }
        }
        else
        {
            if (v[b - 1])
            {
                co--;
                v[b - 1] = 0;
            }
            else
            {
                co++;
                v[b - 1] = 1;
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