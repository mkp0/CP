#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        string s;
        cin >> s;
        if (s.size() % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        map<char, int> m1, m2;
        int ans = 0;

        for (int i = 0; i < s.size() / 2; i++)
        {
            m1[s[i]]++;
        }
        for (int i = s.size() / 2; i < s.size(); i++)
        {
            m2[s[i]]++;
        }
        for (int i = 97; i <= 122; i++)
        {
            ans += abs(m1[i] - m2[i]);
        }

        cout << ans / 2 << endl;
    }

    return 0;
}