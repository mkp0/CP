#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int s, ans = 0;
        auto u = upper_bound(a, a + n, a[0]);
        s = u - a;
        while (u != (a + n))
        {
            auto ut = upper_bound(a, a + n, *u);
            ans += (s) * (ut - u);
            s = ut - a;
            u = ut;
        }
        cout << ans << endl;
    }
    return 0;
}