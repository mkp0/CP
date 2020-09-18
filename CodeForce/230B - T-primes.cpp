#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool func(ll n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l;
        cin >> l;
        if (ceil(sqrt(l)) == floor(sqrt(l)))
        {
            if (func(sqrt(l)))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}