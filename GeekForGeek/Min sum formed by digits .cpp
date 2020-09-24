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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int a = 0, b = 0;
        for (int i = 0; i < n; i += 2)
        {
            a = a * 10 + arr[i];
        }
        if (n > 1)
        {
            for (int i = 1; i < n; i += 2)
            {
                b = b * 10 + arr[i];
            }
        }

        cout << a + b << endl;
    }
    return 0;
}