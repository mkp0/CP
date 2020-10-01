#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 4;
        if (n <= 3)
        {
            cout << arr[n - 1] << endl;
        }
        else
        {
            for (int i = 3; i < n; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
            }
            cout << arr[n - 1] << endl;
        }
    }
    return 0;
}