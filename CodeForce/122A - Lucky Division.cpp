#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {4, 7, 47, 74, 447, 774, 474, 747, 744, 477};

    int num;
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        if (num % arr[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO";
    return 0;

    return 0;
}