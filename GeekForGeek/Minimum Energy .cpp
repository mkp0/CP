#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        ll sum = 0;
        for (int i = 0; i < l; i++)
        {
            sum += arr[i];
            if (sum < 0)
            {
                ans = min(ans, sum);
            }
        }
        if (ans < 0)
        {
            cout << 1 - ans << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}