#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, ans = 0;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}