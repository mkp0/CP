#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, i;
        cin >> a >> b;
        int arr[a];

        for (i = 1; i <= a; i++)
        {
            arr[i - 1] = i;
        }

        for (int i = 0; i < b; i++)
        {
            int temp;
            cin >> temp;
            arr[temp - 1] = -1;
        }

        int x = 1;

        for (int i = 0; i < a; i++)
        {
            if (arr[i] > 0)
            {
                if (x % 2)
                {
                    cout << arr[i] << " ";
                    arr[i] = -1;
                }
                x++;
            }
        }
        cout << endl;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] > 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}