#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, ans, co = 0;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] > 0)
            co++;
        ans = co;

        for (int i = 1; i < l; i++)
        {
            if (arr[i] >= 0 && arr[i - 1] >= 0)
            {
                co++;
            }
            if (arr[i] >= 0 && arr[i - 1] < 0)
            {
                co = 1;
            }
            ans = max(co, ans);
        }
        cout << ans << endl;
    }

    return 0;
}