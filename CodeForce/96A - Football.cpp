#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int a = 0, b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            a++;
            b = 0;
        }
        else
        {
            b++;
            a = 0;
        }

        if (a >= 7 || b >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
    if (a < 7 && b < 7)
    {
        cout << "NO";
    }
    return 0;
}