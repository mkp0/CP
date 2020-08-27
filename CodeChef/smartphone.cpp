//smartphone
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l;
    cin >> l;
    long long arr[l];

    for (int i = 0; i < l; i++)
    {
        scanf("%lld", &arr[i]);
    }

    sort(arr, arr + l);

    long long ans = 0;

    for (int i = 0; i < l; i++)
    {
        long long cur = arr[i] * (l - i);

        if (cur > ans)
        {
            ans = cur;
        }
    }
    printf("%lld", ans);
    return 0;
}