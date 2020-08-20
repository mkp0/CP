#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    while (1)
    {
        cin >> x;
        if (x == 0)
            return 0;
        string str;
        cin >> str;

        char mat[str.size() / x][x];
        for (int i = 0; i < str.size(); i++)
        {
            if (i % (2 * x) < x)
            {
                mat[i / x][i % (2 * x)] = str[i];
            }
            else
            {
                mat[i / x][x - 1 - (i % x)] = str[i];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < str.size() / x; j++)
            {
                cout << mat[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}