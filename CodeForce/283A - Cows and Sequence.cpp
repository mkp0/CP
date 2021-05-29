#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define llinf 1e18
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))

using namespace std;

/* I'm gonna be the King of the Pirates */
int mod = 1e9 + 7;
int q;

void solve()
{
    vector<int> arr;
    vector<int> prefs;
    double su = 0;
    ll len = 1;
    arr.pb(0);
    arr.pb(0);
    prefs.pb(0);
    prefs.pb(0);
    cin >> q;

    while (q--)
    {
        int que;
        cin >> que;
        if (que == 1)
        {
            ll l, val;
            cin >> l >> val;
            l = min(len, l);
            su += l * val;
            prefs[l] += val;
            printf("%0.6f\n", su / len);
        }
        else if (que == 2)
        {
            int val;
            cin >> val;
            arr.pb(val);
            prefs.pb(0);
            len++;
            su += val;
            printf("%0.6f\n", su / len);
        }
        else
        {
            if (len >= 2)
            {
                su -= *arr.rbegin() + *prefs.rbegin();
                arr.pop_back();
                len--;
                prefs[len] += prefs[len + 1];
                prefs.pop_back();
            }
            printf("%0.6f\n", su / len);
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