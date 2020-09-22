#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll m, n;
    cin >> m >> n;

    ll maxP = m / n, mi, ma;

    if (m % n)
    {
        mi = ((maxP + 1) * maxP / 2 * (m % n)) + ((maxP - 1) * maxP / 2 * (n - (m % n)));
    }
    else
    {
        mi = n * (maxP - 1) * maxP / 2;
    }

    m -= n - 1;
    ma = m * (m - 1) / 2;

    cout << mi << " " << ma << endl;

    return 0;
}