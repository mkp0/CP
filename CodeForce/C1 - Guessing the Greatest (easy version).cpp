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
int n, l, r, m;
int getm(int l, int r)
{
    if (l == r)
        return 0;
    cout << "? " << l << ' ' << r << endl;
    int kk;
    cin >> kk;
    return kk;
}

void solve()
{
    cin >> n;
    l = 1, r = n;
    m = getm(l, r);
    while (l != r)
    {
        int mid = (l + r) / 2;
        if (m <= mid)
        {
            if (getm(1, mid) == m)
                r = mid;
            else
                l = mid + 1;
        }
        else
        {
            if (getm(mid + 1, n) == m)
                l = mid + 1;
            else
                r = mid;
        }
    }
    cout << "! " << l << endl;
}

int32_t main()
{
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