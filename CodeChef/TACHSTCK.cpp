#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l, d, ans = 0, co = 0;
    cin >> l >> d;
    long long arr[l];
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + l);

    for (int i = 0; i < l - 1;)
    {
        if (arr[i + 1] - arr[i] <= d)
        {
            ans += 1;
            i += 2;
        }
        else
            i++;
    }

    cout << ans << endl;

    return 0;
}