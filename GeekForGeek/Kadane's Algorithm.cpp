#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, ans = INT_MIN;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = max(ans, arr[i]);
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum = arr[i] + sum;

            if (sum > 0)
            {
                ans = max(sum, ans);
            }
            else
            {
                sum = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}