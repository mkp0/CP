#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, o = 0, e = 0;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
            {
                o++;
            }
        }

        if (o == 0 && m > 0)
        {
            cout << "No" << endl;
            continue;
        }
        if (o == n && m % 2 == 0)
        {
            cout << "No" << endl;
            continue;
        }
        if (o % 2 == 0 && m == n)
        {
            cout << "No" << endl;
            continue;
        }

        cout << "Yes" << endl;
    }

    return 0;
}