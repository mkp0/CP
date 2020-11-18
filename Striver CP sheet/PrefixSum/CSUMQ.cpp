#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a[i] = temp;

        if (i > 0)
        {
            a[i] += a[i - 1];
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        int ans = a[r];

        if (l > 0)
        {
            ans -= a[l - 1];
        }

        cout << ans << endl;
    }

    return 0;
}