#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        unordered_map<char, int> m1, m2;
        bool isSub = false;
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < a.size(); i++)
        {
            m1[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            m2[b[i]]++;
        }

        for (int i = 97; i < 123; i++)
        {
            if (m1[i] > 0 && m2[i] > 0)
            {
                isSub = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (!isSub)
            cout << "NO" << endl;
    }

    return 0;
}