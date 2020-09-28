#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a = 0;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll t = n - 1, j = 1, ans;

        while (j <= n)
        {
            ll temp;
            j++;
            if (n % j == 0)
            {
                temp = n / j + (j - 2);
            }
            else
            {
                temp = n / j + (j - 1);
            }

            if (t < temp)
            {
                break;
            }
            t = temp;
        }
        cout << t << endl;
    }
    return 0;
}