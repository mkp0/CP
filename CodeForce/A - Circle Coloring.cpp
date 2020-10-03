#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], b[n], c[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        d[0] = a[0];
        cout << a[0] << " ";
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] == d[(i - 1)])
            {
                d[i] = b[i];
            }
            else
            {
                d[i] = a[i];
            }
            cout << d[i] << " ";
        }
        ll ans;
        if (n > 1)
        {
            ans = a[n - 1];
            if (a[n - 1] == d[n - 2] || a[n - 1] == d[0])
            {
                ans = b[n - 1];
                if (b[n - 1] == d[n - 2] || b[n - 1] == d[0])
                {
                    ans = c[n - 1];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}