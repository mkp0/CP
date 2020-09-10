#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> m;
    int a, b, c, temp;
    cin >> a >> b >> c;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        m[temp]++;
    }

    for (int i = 0; i < b; i++)
    {
        cin >> temp;
        m[temp]++;
    }

    for (int i = 0; i < c; i++)
    {
        cin >> temp;
        m[temp]++;
    }

    temp = 0;

    for (auto x : m)
    {
        if (x.second >= 2)
        {
            temp++;
        }
    }

    cout << temp << endl;
    for (auto x : m)
    {
        if (x.second >= 2)
        {
            cout << x.first << endl;
        }
    }

    return 0;
}