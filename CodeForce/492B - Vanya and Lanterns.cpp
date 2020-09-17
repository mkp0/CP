#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, l, i;
    cin >> n >> l;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double ans = (arr[0] - 0);
    for (i = 1; i < n; i++)
    {
        if (arr[i] > l)
            break;
        ans = max(ans, (arr[i] - arr[i - 1]) / 2.0);
    }

    ans = max(ans, (l - arr[i - 1]) / 1.0);

    printf("%.10lf", ans);
    return 0;
}