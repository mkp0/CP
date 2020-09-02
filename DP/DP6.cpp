//Cutting Rod
#include <bits/stdc++.h>

using namespace std;

int memo[100] = {0};

int func(int len, int arr[])
{
    if (len == 0)
    {
        return 0;
    }

    if (memo[len] != -1)
    {
        return memo[len];
    }

    int ans = 0;
    for (int i = 1; i <= len; i++)
    {
        int temp = arr[i] + func(len - i, arr);
        ans = max(ans, temp);
    }
    memo[len] = ans;
    return memo[len];
}

int main()
{

    int len;
    cin >> len;
    int arr[len];
    for (int i = 1; i <= len; i++)
    {
        cin >> arr[i];
        memo[i] = -1;
    }
    int ans = func(len, arr);
    cout << ans;
    return 0;
}