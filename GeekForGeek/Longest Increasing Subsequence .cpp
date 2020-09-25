#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int memo[n];
        for (int i = 0; i < n; i++)
        {
            memo[i] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] < arr[i])
                {
                    memo[i] = max(memo[j] + 1, memo[i]);
                }
            }
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, memo[i]);
        }
        cout << ans << endl;
    }
    return 0;
}