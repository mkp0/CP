#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, ans = 0;
        cin >> a >> b;

        if (a <= b)
            ans = abs(a - b);
        else
        {
            if (a % 2 != b % 2)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}