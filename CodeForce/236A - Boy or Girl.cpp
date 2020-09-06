#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<char> st;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }

    if (st.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}