#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, ans = 1;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << ans << endl;
            continue;
        }
        ans++;
        n -= 2;
        while (n > x)
        {
            n -= x;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}