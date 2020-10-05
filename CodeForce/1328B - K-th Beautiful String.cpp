#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll s = 1, e = 1, i = 1;
        while (e < k)
        {
            s = e + 1;
            i++;
            e += i;
        }
        e = n - (k - s) - 1;
        s = n - i - 1;
        for (i = 0; i < n; i++)
        {
            if ((i == s) || (i == e))
            {
                cout << 'b';
            }
            else
            {
                cout << 'a';
            }
        }
        cout << endl;
    }
    return 0;
}