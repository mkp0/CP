//Count zeroes ex input : 10520 output : 2

#include <bits/stdc++.h>

using namespace std;
int countZero(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int small = countZero(num / 10);
    if (num % 10 == 0)
    {
        return 1 + small;
    }
    else
    {
        return small;
    }
}

int main()
{
    int num;
    cin >> num;
    cout << countZero(num);
    return 0;
}