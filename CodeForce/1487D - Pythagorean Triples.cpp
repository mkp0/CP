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

bool isValid(ll a)
{
    ll temp;
    temp = temp * temp;
    return (temp == a);
}

vector<int> preComp;
void precomp()
{
    for (ll i = 3; i * i <= 1e10; i++)
    {
        ll sq = i * i;
        ll a, b;
        if (sq % 2)
            a = sq / 2;
        else
            a = sq / 2 - 1;
        b = sq / 2 + 1;
        if (sq == (b * b - a * a))
        {
            preComp.push_back(b);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    cout << upper_bound(preComp.begin(), preComp.end(), n) - preComp.begin() << endl;
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
    precomp();
    while (t--)
    {
        solve();
    }
    return 0;
}