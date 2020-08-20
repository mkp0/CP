#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int dp[num + 1] = {0};
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i < num; i++)
    {
        dp[i] = max(max(arr[i], dp[i - 1]), dp[i - 2] + arr[i]);
    }
    cout << dp[num - 1];

    return 0;
}