#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char chack[4] = {'H',
                     'Q',
                     '9'};

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (s[i] == chack[j])
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}