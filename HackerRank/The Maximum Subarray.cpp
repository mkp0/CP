#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int num, max1 = INT_MIN, max2 = INT_MIN;
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }

        bool isPositive = false;
        for (int i = 0; i < num; i++)
        {
            if (arr[i] > 0)
            {
                isPositive = true;
            }
            if (arr[i] > 0 && max2 > 0)
            {
                max2 += arr[i];
            }
            else if (max2 < arr[i])
            {
                max2 = arr[i];
            }
        }

        if (isPositive)
        {
            for (int i = 1; i < num; i++)
            {
                if (arr[i] + arr[i - 1] > 0)
                {
                    arr[i] = arr[i] + arr[i - 1];
                }
                else
                {
                    arr[i] = 0;
                }
            }
        }
        else
        {
            max1 = max2;
        }

        for (int i = 0; i < num; i++)
        {
            if (arr[i] > max1)
            {
                max1 = arr[i];
            }
        }
        cout << max1 << " " << max2 << endl;
    }
    return 0;
}