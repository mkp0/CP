#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool isF = false;
        int arr[2][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    cin >> arr[j][k];
                }
                if (j == 1 && (arr[1][0] == arr[0][1]))
                {
                    isF = true;
                }
            }
        }

        if (m % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (isF)
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