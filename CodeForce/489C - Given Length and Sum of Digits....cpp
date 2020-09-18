#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    int mi[m], ma[m];

    if (s == 0)
    {
        if (m > 1)
        {
            cout << -1 << " " << -1 << endl;
            return 0;
        }
    }

    if (m * 9 < s)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    //max
    for (int i = 0; i < m; i++)
    {
        ma[i] = min(9, s);
        s -= min(9, s);
    }

    //min
    for (int i = 0; i < m; i++)
    {
        mi[i] = ma[m - i - 1];
    }

    if (mi[0] == 0)
    {
        int posi = 0;
        for (int i = 0; i < m; i++)
        {
            if (mi[i] > 0)
            {
                posi = i;
                break;
            }
        }

        mi[0]++;
        mi[posi]--;
    }
    for (int i = 0; i < m; i++)
    {
        cout << mi[i];
    }

    cout << " ";

    for (int i = 0; i < m; i++)
    {
        cout << ma[i];
    }

    return 0;
}