#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll ans = INT_MIN, cur;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll memo[n], memo1[n];

        //Brute Force
        for (int i = 0; i < n; i++)
        {
            memo[i] = arr[i];
            for (int j = 0; j < i; j++)
            {
                if (arr[j] < arr[i])
                {
                    memo[i] = max(memo[j] + arr[i], memo[i]);
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            memo1[i] = arr[i];
            for (int j = n - 1; j > i; j--)
            {
                if (arr[j] < arr[i])
                {
                    memo1[i] = max(memo1[j] + arr[i], memo1[i]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            ans = max(memo1[i] + memo[i] - arr[i], ans);
        }
        cout << ans << endl;
    }
    return 0;
}