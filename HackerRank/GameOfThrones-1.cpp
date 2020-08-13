#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int oddChar = 0;
    for (int i = 97; i <= 122; i++)
    {
        if (m[i] % 2 == 1)
        {
            oddChar++;
        }
    }

    if (oddChar > 1)
    {
        cout << "NO";
    }
    else if (oddChar == 1 && s.size() % 2 == 1)
    {
        cout << "YES";
    }
    else if (oddChar == 1 && s.size() % 2 == 0)
    {
        cout << "NO";
    }
    else if (oddChar == 0 && s.size() % 2 == 0)
    {
        cout << "YES";
    }

    return 0;
}