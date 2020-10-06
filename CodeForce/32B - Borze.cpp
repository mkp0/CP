#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char a = '.', b = '-';

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == b)
        {
            i++;
            if (s[i] == b)
            {
                cout << 2;
            }
            else
            {
                cout << 1;
            }
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}