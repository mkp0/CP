#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0 && (x == y || x == y + 2))
        {
            cout << x + y << endl;
        }
        else if (x % 2 == 1 && (x == y || x == y + 2))
        {
            cout << x + y - 1 << endl;
        }
        else
        {
            cout << "No Number" << endl;
        }
    }
    return 0;
}