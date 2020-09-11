#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll func(ll a, ll b, ll x, ll y, ll n)
{
    if (b - y >= n)
    {
        b = b - n;
    }
    else
    {
        n = n - (b - y);
        b = y;
        if (a - x >= n)
        {
            a = a - n;
        }
        else
        {
            a = x;
        }
    }

    return a * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        cout << min(func(a, b, x, y, n), func(b, a, y, x, n)) << endl;
    }
    return 0;
}