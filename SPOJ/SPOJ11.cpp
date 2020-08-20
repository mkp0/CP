#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long test_case;
    cin >> test_case;
    while (test_case--)
    {
        long long a, b, x;
        cin >> a >> b;
        b = b % 4;
        a = a % 10;
        if (a == 0 || a == 1)
        {
            cout << a << endl;
            continue;
        }
        if (b == 0)
        {
            b = 4;
        }
        x = a;
        while (--b)
        {
            a = a * x;
        }

        cout << a % 10 << endl;
    }
    return 0;
}