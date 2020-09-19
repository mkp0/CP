#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    ll mi = arr[0], ma = arr[n - 1];
    if (mi == ma)
    {
        cout << ma - mi << " " << (n - 1) * n / 2;
        return 0;
    }
    ll c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != mi)
        {
            break;
        }
        c1++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != ma)
        {
            break;
        }
        c2++;
    }

    cout << ma - mi << " " << c1 * c2;

    return 0;
}