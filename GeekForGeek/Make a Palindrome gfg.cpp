#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        int od = 0;
        for (auto x : m)
        {
            if (x.second % 2 == 1)
            {
                od++;
            }
        }
        if (od <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << od - 1 << endl;
        }
    }
    return 0;
}