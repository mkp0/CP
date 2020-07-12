#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, max = 0, count = 0;
    cin >> num;

    while (num > 0)
    {
        if (num % 2 == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count > max)
        {
            max = count;
        }
        num = num / 2;
    }

    cout << max << endl;

    return 0;
}