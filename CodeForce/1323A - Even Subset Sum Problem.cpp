#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        bool isT = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << 1 << endl;
                cout << i + 1 << endl;
                isT = false;
                break;
            }
            else
            {
                sum += arr[i];
                if (sum % 2 == 0)
                {
                    cout << 2 << endl;
                    cout << i << " " << i + 1 << endl;
                    isT = false;
                    break;
                }
            }
        }
        if (isT)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}