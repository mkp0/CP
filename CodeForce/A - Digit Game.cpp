#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int l;
    cin >> l;

    while (l--)
    {
        string n;
        ll t;
        cin >> t >> n;
        ll ee = 0, oo = 0;
        ll co = 0, temp;
        for (int i = 0; i < t; i++)
        {
            temp = n[i] - '0';

            if (temp % 2 == 1 && co % 2 == 0)
            {
                oo++;
            }
            else if (temp % 2 == 0 && co % 2 == 1)
            {
                ee++;
            }

            co++;
            temp = temp / 10;
        }

        if (t % 2 == 0)
        {
            if (ee > 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            if (oo > 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}