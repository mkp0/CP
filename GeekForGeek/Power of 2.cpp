#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = n & (n - 1);

        if (n == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        if (ans == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}