#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int num, ans = 0;
        cin >> num;
        int arr1[num], arr2[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < num; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + num);
        sort(arr2, arr2 + num);

        for (int i = 0; i < num; i++)
        {
            ans += arr1[i] * arr2[i];
        }
        cout << ans << endl;
    }
    return 0;
}