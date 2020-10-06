#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    bool check[10] = {true, true, true, true, true, true, true, true, true, true};
    for (int i = num + 1; i <= 9876; i++)
    {
        int temp = i;
        while (temp >= 0)
        {
            if (temp == 0)
            {
                cout << i << endl;
                return 0;
            }
            if (check[temp % 10])
            {
                check[temp % 10] = false;
            }
            else
            {
                break;
            }
            temp /= 10;
        }
        temp = i;
        while (temp)
        {
            check[temp % 10] = true;
            temp /= 10;
        }
    }
    return 0;
}