#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            if (j == 0)
            {
                x += temp;
            }
            else if (j == 1)
            {
                y += temp;
            }
            else
            {
                z += temp;
            }
        }
    }

    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}