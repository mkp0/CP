//Sum of Digits
#include <bits/stdc++.h>

using namespace std;

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int small = sumOfDigits(num / 10);
    return num % 10 + small;
}

int main()
{
    int num;
    cin >> num;
    cout << sumOfDigits(num);
    return 0;
}