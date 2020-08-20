//Calculation of Power
#include <bits/stdc++.h>

using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int small = power(a, b - 1);
    return a * small;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}