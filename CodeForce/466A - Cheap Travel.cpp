#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll func(ll a, ll b, ll c, ll d)
{
    if ((d * 1.0) / b >= c * 1.0)
    {
        return a * c;
    }
    return (a / b * d) + min((a % b) * c, d);
}

int main()
{

    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << func(n, m, a, b) << endl;

    return 0;
}