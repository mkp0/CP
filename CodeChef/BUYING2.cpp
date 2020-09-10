#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, s = 0, m = INT_MAX;
        cin >> l;
        int k;
        cin >> k;
        int a[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
            m = min(m, a[i]);
            s += a[i];
        }

        bool isSuf = (s - m) / k == s / k;
        if (!isSuf)
        {
            cout << s / k << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}