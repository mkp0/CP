#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ans = 0, l, k;
        cin >> l;
        ll arr[l];
        for (ll i = 0; i < l; i++)
            cin >> arr[i];

        cin >> k;

        sort(arr, arr + l, greater<int>());
        for (ll i = 0; i < l; i++)
        {
            if (i + 1 >= l)
            {
                break;
            }
            if (arr[i] - arr[i + 1] < k)
            {
                ans += arr[i] + arr[i + 1];
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}