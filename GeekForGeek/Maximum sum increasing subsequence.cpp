//Maximum sum increasing subsequence
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
        int arr[l], dp[l] = {0};

        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        dp[0] = arr[0];
        for (int i = 1; i < l; i++)
        {
            int j = i - 1;
            dp[i] = arr[i];
            while (j >= 0)
            {
                if (arr[j] < arr[i])
                {
                    if (dp[j] + arr[i] > dp[i])
                    {
                        dp[i] = arr[i] + dp[j];
                    }
                }
                j--;
            }
        }

        int ans = dp[0];
        for (int i = 1; i < l; i++)
        {
            if (ans < dp[i])
            {
                ans = dp[i];
            }
        }

        cout << ans << endl;
    }
    return 0;
}
