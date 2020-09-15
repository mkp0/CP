#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        int mod1 = a % 2 + b % 2 + c % 2 + d % 2;
        if (mod1 <= 1)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a && b && c)
        {
            a--, b--, c--, d++;
            mod1 = a % 2 + b % 2 + c % 2 + d % 2;
            if (mod1 <= 1)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }

    return 0;
}