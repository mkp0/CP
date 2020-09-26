#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll func(ll n)
{
    ll ans = 0;
    if (n >= 100)
    {
        ans += n / 100;
        n = n % 100;
    }
    if (n >= 20)
    {
        ans += n / 20;
        n = n % 20;
    }
    if (n >= 10)
    {
        ans += n / 10;
        n = n % 10;
    }
    if (n >= 5)
    {
        ans += n / 5;
        n = n % 5;
    }

    return ans + n;
}

int main()
{
    ll n;
    cin >> n;
    cout << func(n);
    return 0;
}