//CodeChef
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;
        if (k * l < n)
        {
            cout << -1 << endl;
            continue;
        }
        if (k == 1 && n > 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cout << i % k + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}