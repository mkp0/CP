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
    int n, m;
    cin >> n >> m;
    map<int, int> ma;
    bool is = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (ma[m + x] || ma[x - m])
        {
            is = true;
        }
        ma[x]++;
    }

    if (is)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int32_t main()
{
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