//HackerRank
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    cin >> l;
    long long arr[l];
    int k;
    cin >> k;

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + l);

    long long ans = INT_MAX;

    for (int i = 0; i < l - k; i++)
    {
        ans = min(ans, arr[i + k - 1] - arr[i]);
    }

    cout << ans;

    return 0;
}