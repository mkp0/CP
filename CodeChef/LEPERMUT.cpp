#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, v = 0, lv = 0;
        cin >> l;
        int a[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < l - 1; i++)
        {
            for (int j = i + 1; j < l; j++)
            {
                if (a[i] > a[j])
                {
                    v++;
                }
            }
        }

        for (int i = 0; i < l - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                lv++;
            }
        }
        if (v == lv)
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