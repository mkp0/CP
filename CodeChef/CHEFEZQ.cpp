#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll su = 0, ans = 0;
        ll n, k;
        cin >> n >> k;
        bool is = false;
        for (ll i = 1; i <= n; i++)
        {
            ll temp;
            cin >> temp;
            su += temp;

            if (su < k && !is)
            {
                is = true;
                ans = i;
            }
            su -= k;
        }
        if (is)
        {
            cout << ans << endl;
            continue;
        }

        cout << n + (su / k) + 1 << endl;
    }
    return 0;
}