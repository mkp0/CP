#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> m;

    while (t--)
    {
        string s;
        cin >> s;
        if (m[s] == 0)
        {
            cout << "OK" << endl;
            m[s]++;
        }
        else
        {
            cout << s << m[s] << endl;
            m[s]++;
        }
    }

    return 0;
}