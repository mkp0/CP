#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans[n] = {INT_MIN};

    for (int i = 0; i < n; i++)
    {
        int mi = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[j] < mi)
            {
                mi = arr[j];
            }
            ans[j - i] = max(ans[j - i], mi);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}