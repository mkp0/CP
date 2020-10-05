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
        if ((n & (n - 1)) == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2 << " " << 3 << " " << 1 << " ";
            ll te = 4;
            while (te * 2 < n)
            {
                te *= 2;
                cout << te - 1 << " " << te / 2 << " ";
                for (ll i = te - 2; i > te / 2; i--)
                {
                    cout << i << " ";
                }
            }
            if (n % 2 == 0)
            {
                cout << n - 1 << " " << n << " ";
                n -= 2;
            }
            while (n >= te)
            {
                cout << n << " ";
                n--;
            }

            cout << endl;
        }
    }
    return 0;
}