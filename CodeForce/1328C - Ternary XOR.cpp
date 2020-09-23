#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        string a = s;
        string b = s;
        bool isT = true;
        for (int i = 0; i < l; i++)
        {

            if (s[i] == '2' && isT)
            {
                a[i] = '1';
                b[i] = '1';
                continue;
            }
            if (s[i] == '1' && isT)
            {
                a[i] = '1';
                b[i] = '0';
                isT = false;
                continue;
            }
            if (s[i] == '0')
            {
                a[i] = '0';
                b[i] = '0';
                continue;
            }
            if (!isT)
            {
                a[i] = '0';
                b[i] = s[i];
            }
        }

        cout << a << "\n"
             << b << endl;
    }

    return 0;
}