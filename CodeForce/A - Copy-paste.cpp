#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll ans = 0;
        for (ll i = 1; i < n; i++)
        {
            ans += (k - arr[i]) / arr[0];
        }
        cout << ans << endl;
    }
    return 0;
}