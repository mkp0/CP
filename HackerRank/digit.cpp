#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    int digits = 0;

    cin >> num;

    while (num > 0)
    {
        digits++;
        num /= 10;
    }

    cout << digits << endl;

    return 0;
}