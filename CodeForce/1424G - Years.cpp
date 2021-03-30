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
    vector<int> bir, dea;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        bir.push_back(a);
        dea.push_back(b);
    }
    sort(bir.begin(), bir.end());
    sort(dea.begin(), dea.end());

    int a1 = 0;
    int b1 = 0;

    for (int i = 0; i < n; i++)
    {
        auto x = upper_bound(dea.begin(), dea.end(), bir[i]) - dea.begin();
        int peop = i + 1 - x;
        if (peop > a1)
        {
            a1 = peop;
            b1 = bir[i];
        }
    }
    cout << b1 << " " << a1 << endl;
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