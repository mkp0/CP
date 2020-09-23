#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, ans = 0, x = 0, y = 0;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    if (ans == t)
    {
        cout << ans - 1;
        return 0;
    }
    else if (ans == 0)
    {
        cout << t;
        return 0;
    }
    for (int i = 0; i < t; i++)
    {
        int j = i;
        if (arr[j] == 0)
        {
            x = -1;
            j++;
            y = min(y, x);
            while (x < 0 && j < t)
            {
                if (arr[j] == 0)
                {
                    x--;
                }
                else
                {
                    x++;
                }
                j++;
                y = min(y, x);
            }
        }
    }
    cout << ans - y;
    return 0;
}