//CIELAB
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int lastDigit = (a - b) % 10;

    if (lastDigit == 9)
    {
        cout << a - b - 1;
    }
    else
    {
        cout << a - b + 1;
    }

    return 0;
}