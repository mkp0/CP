#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int num;
        cin >> num;

        int k = 0, arr[1000] = {1};
        int carry = 0;
        for (int i = 1; i <= num; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                arr[j] = arr[j] * i + carry;
                carry = arr[j] / 10;
                arr[j] = arr[j] % 10;
            }
            while (carry)
            {
                k++;
                arr[k] = carry % 10;
                carry = carry / 10;
            }
        }
        for (int i = k; i >= 0; i--)
        {
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}