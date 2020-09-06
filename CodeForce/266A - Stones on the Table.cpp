#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int co = 0, flag = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[flag] == s[i])
        {
            co++;
        }
        else
        {
            flag = i;
        }
    }

    cout << co;
    return 0;
}