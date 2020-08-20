//Replace all a with x in string s;

#include <bits/stdc++.h>

using namespace std;

string func(string &s, int pos)
{
    if (s.size() == pos)
    {
        return s;
    }
    if (s[pos] == 'a')
    {
        s[pos] = 'x';
    }
    string ans = func(s, pos + 1);
    return ans;
}

int main()
{
    string s = "masummasummasummasummasum";
    cout << func(s, 0);
    return 0;
}