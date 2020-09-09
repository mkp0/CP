#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, k;

        long long s1 = 0, s2 = 0;
        scanf("%d%d", &l, &k);
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            scanf("%d", &arr[i]);
            s1 += arr[i];
        }
        sort(arr, arr + l);

        if (k > l - k)
        {
            k = l - k;
        }

        for (int i = 0; i < k; i++)
        {
            s2 += arr[i];
        }

        printf("%d\n", abs(s1 - s2 - s2));
    }
    return 0;
}