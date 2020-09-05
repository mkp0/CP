#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    //Method 1
    // if (a & (1 << (b - 1)))
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    //Method 2

    a = a >> (b - 1);

    if (a & 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}