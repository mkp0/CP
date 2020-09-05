#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    bool isPowerOfTwo = !(a & (a - 1));

    if (isPowerOfTwo)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}