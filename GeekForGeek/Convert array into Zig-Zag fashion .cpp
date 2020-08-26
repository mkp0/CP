#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        int arr[l];

        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        int f = true;

        for (int i = 0; i < l - 1; i++)
        {
            if (f)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            f = !f;
        }

        for (int i = 0; i < l; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}