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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                a++;
            }
            else if (arr[i] == 1)
            {
                b++;
            }
            else
            {
                c++;
            }
        }

        for (int i = 0; i < a; i++)
        {
            cout << 0 << " ";
        }
        for (int i = 0; i < b; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < c; i++)
        {
            cout << 2 << " ";
        }

        cout << endl;
    }
    return 0;
}