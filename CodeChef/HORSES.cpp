#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, mi = INT_MAX;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + l);
        for (int i = 1; i < l; i++)
        {
            mi = min(arr[i] - arr[i - 1], mi);
        }
        cout << mi << endl;
    }
    return 0;
}