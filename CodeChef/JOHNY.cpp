#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l;
        cin >> l;
        long long arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        int fav;
        cin >> fav;
        fav = arr[fav - 1];

        sort(arr, arr + l);
        fav = lower_bound(arr, arr + l, fav) - arr;
        cout << fav + 1 << endl;
    }
    return 0;
}