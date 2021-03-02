#include <bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    ll ans = 0;

    vector<int> jd(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (v[i] - jd[i] > 1)
        {
            ans += (v[i] - 1) - jd[i];
        }
        else if (i + 1 < n)
        {
            jd[i + 1] += (jd[i] - (v[i] - 1));
        }
        for (int j = i + 2; j <= min(n - 1, i + v[i]); j++)
        {
            jd[j]++;
        }
    }

    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}