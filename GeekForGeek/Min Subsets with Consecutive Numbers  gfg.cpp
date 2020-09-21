#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t;
        cin >> t;
        int arr[t];
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + t);
        int ans = 1;
        for (int i = 0; i < t - 1; i++)
        {
            if (arr[i + 1] - arr[i] != 1)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}