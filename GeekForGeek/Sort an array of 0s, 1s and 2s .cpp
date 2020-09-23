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
        int a[l];

        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        int arr[3];
        arr[0] = 0;
        arr[1] = 0;
        arr[2] = 0;

        for (int i = 0; i < l; i++)
        {
            arr[a[i]]++;
        }
        int i = 0;

        for (int k = 0; k <= 2; k++)
        {
            for (int j = 0; j < arr[k]; j++)
            {
                a[i++] = k;
            }
        }
        for (int i = 0; i < l; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}