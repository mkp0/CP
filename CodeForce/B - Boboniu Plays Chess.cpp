#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int co = a * b;
    cout << c << " " << d << endl;
    for (int i = c + 1; i <= a; i++)
    {
        cout << i << " " << d << endl;
    }
    for (int i = c - 1; i >= 1; i--)
    {
        cout << i << " " << d << endl;
    }
    bool is = true;
    for (int i = 1; i <= b; i++)
    {
        if (i == d)
        {
            continue;
        }
        if (is)
        {
            for (int j = 1; j <= a; j++)
            {
                cout << j << " " << i << endl;
            }
        }
        else
        {
            for (int j = a; j >= 1; j--)
            {
                cout << j << " " << i << endl;
            }
        }
        is = !is;
    }

    return 0;
}