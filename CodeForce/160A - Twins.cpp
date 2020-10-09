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
    int arr[n];
    long long sum = 0, temp = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum /= 2;
    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        temp += arr[i];
        ans++;
        if (temp > sum)
        {
            cout << ans << endl;
            break;
        }
    }
    return 0;
}