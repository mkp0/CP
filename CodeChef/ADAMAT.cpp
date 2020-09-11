#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[0][i] != i + 1)
            {
                int temp = i;
                while (temp >= 0)
                {
                    swap(arr[0][temp], arr[temp][0]);
                    temp--;
                }
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}