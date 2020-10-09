#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int ans = 1;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int temp = 1;
        while (i < n)
        {
            if (arr[i] >= arr[i - 1])
            {
                temp++;
                i++;
            }
            else
            {
                break;
            }
        }
        ans = max(ans, temp);
    }

    cout << ans;
    return 0;
}