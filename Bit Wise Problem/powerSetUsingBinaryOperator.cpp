#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int totalPerm = pow(2, s.size());

    for (int i = 0; i < totalPerm; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (i & (1 << j))
                cout << s[j];
        }
        cout << " ";
    }
    return 0;
}