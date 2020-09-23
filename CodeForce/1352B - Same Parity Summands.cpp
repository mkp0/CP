#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b > a)
        {
            cout << "NO" << endl;
            continue;
        }
        if (a % 2 == 1 && b % 2 == 0)
        {
            cout << "NO" << endl;
            continue;
        };
        ll tempo = a - (b - 1);
        ll tempe = a - (2 * (b - 1));
        if (tempo % 2 == 1 && tempo > 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < b; i++)
            {
                cout << 1 << " ";
            }
            cout << tempo << endl;
        }
        else if (tempe % 2 == 0 && tempe > 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < b; i++)
            {
                cout << 2 << " ";
            }
            cout << tempe << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}