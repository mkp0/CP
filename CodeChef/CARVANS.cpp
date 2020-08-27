// CARVANS
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, ans, l;
    scanf("%d", &t);

    while (t--)
    {
        m = 2147483647;
        ans = 0;

        scanf("%d", &l);
        int x;

        for (int i = 0; i < l; i++)
        {
            scanf("%d", &x);
            if (x <= m)
            {
                m = x;
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}