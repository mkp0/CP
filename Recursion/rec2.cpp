//Fabonacchi number
#include <bits/stdc++.h>

using namespace std;

int fab(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return fab(num - 1) + fab(num - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << fab(num);
    return 0;
}