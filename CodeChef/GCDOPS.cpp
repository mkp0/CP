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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        bool isT = true;

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                if (i % arr[i] != 0)
                {
                    isT = false;
                    break;
                }
            }
        }
        if (isT)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}