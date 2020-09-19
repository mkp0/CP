#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, temp = 0;
        cin >> k >> n;
        while ((n - temp) / k != 0)
        {
            ll x = n;
            n += (n - temp) / k;
            temp += ((x - temp) / k) * k;
        }

        cout << n << endl;
    }

    return 0;
}