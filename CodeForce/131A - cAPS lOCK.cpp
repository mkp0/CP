#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    bool isAll = true;
    bool isFirst = false;

    if (s[0] >= 97 && s[0] <= 122)
    {
        isFirst = true;
        isAll = false;
    }

    for (i = 1; i < s.size(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            isAll = false;
            isFirst = false;
            break;
        }
    }

    if (isAll || isFirst)
    {
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
            else
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s;

    return 0;
}