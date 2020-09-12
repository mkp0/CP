#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long ans = 1;
        int l;
        cin >> l;
        int arr[l];
        bool isPos = false;
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
                isPos = true;
        }

        sort(arr, arr + l);

        if (!isPos)
        {
            for (int i = l - 1; i >= l - 1 - 4; i--)
            {
                ans *= arr[i];
            }
        }
        else
        {
            ans = ans * arr[l - 1];
            int flag1 = 0, flag2 = l - 1 - 1;
            for (int i = 0; i < 2; i++)
            {
                if (arr[flag1] * arr[flag1 + 1] > arr[flag2] * arr[flag2 - 1])
                {
                    ans *= arr[flag1] * arr[flag1 + 1];
                    flag1 += 2;
                }
                else
                {
                    ans *= arr[flag2] * arr[flag2 - 1];
                    flag2 -= 2;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}