#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, ans = 0;
    cin >> t;
    int x[3];
    int y[3];
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i] >> y[i];
        }

        long long arr[3];

        for (int i = 0; i < 3; i++)
        {
            long long a = (x[i] - x[(i + 1) % 3]) * (x[i] - x[(i + 1) % 3]);
            long long b = (y[i] - y[(i + 1) % 3]) * (y[i] - y[(i + 1) % 3]);
            arr[i] = a + b;
        }

        sort(arr, arr + 3);
        if (arr[2] == arr[0] + arr[1])
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}