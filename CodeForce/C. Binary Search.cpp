#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;
int main()
{
    ll n, val, pos;
    cin >> n >> val >> pos;
    ll st = 0, ed = n, ans = 1, sm = val - 1, lg = n - val;

    while (ed > st)
    {
        ll mid = (st + ed) / 2;
        if (mid <= pos)
        {
            if (mid == pos)
            {
                st = mid + 1;
            }
            else
            {
                ans *= sm;
                sm--;
                st = mid + 1;
            }
        }
        else
        {
            ans *= lg;
            lg--;
            ed = mid;
        }
        ans = ans % MOD;
    }

    for (int i = 1; i <= lg + sm; i++)
    {
        ans *= i;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}