//HackerRank
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
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = l - 1; i >= 0; i--)
        {

            if (arr[i] - 1 - i > 2)
            {
                ans = -1;
                break;
            }
            else
            {
                for (int j = max(0, arr[i] - 2); j < i; j++)
                {
                    if (arr[j] > arr[i])
                    {
                        ans++;
                    }
                }
            }
        }
        if (ans == -1)
        {
            cout << "Too chaotic" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}