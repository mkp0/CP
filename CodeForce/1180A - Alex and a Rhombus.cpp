#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll a = 0, b = 0;

    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        a = n * (n - 1) / 2;
        b = (2 * n - 1) * (2 * n - 1);
        cout << b - 4 * a << endl;
    }

    return 0;
}