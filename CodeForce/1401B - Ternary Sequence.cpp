#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        long long ans = 0;
        ans += min(z1, y2) * 2;
        z1 -= min(z1, y2);
        y2 -= min(z1, y2);
        z2 -= min(z1, z2);
        z2 -= min(x1, z2);
        ans -= min(z2, y1) * 2;
        cout << ans << endl;
    }

    return 0;
}
