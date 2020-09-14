#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l;
        cin >> l;
        ll arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }

        //freeoperation
        ll free = 0;
        for (int i = 0; i < l; i++)
        {
            if (arr[i] > 0)
            {
                free += arr[i];
            }
            else
            {
                if (free > 0)
                {
                    ll temp = min(free, abs(arr[i]));
                    free -= temp;
                    arr[i] += temp;
                }
            }
        }
        cout << free << endl;
    }
    return 0;
}