#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    bool isOne = false;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
        {
            isOne = true;
            break;
        }
    }

    if (!isOne)
    {
        cout << arr[0] * arr[1] * arr[2];
        return 0;
    }
    int a1 = (arr[0] + arr[1]) * arr[2];
    int a2 = arr[0] * (arr[1] + arr[2]);
    int a3 = arr[0] + arr[1] + arr[2];

    cout << max(a1, max(a2, a3));

    return 0;
}