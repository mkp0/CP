#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ans = "hello";
    int flag = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ans[flag])
        {
            flag++;
            if (flag == 5)
            {
                break;
            }
        }
    }

    if (flag == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}