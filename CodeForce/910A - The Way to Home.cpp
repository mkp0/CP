#include <bits/stdc++.h>

using namespace std;

map<int, int> m;

int func(string s, int st, int ed, int ju)
{

    if (st == ed)
    {
        return 0;
    }

    if (st + ju >= ed)
    {
        return 1;
    }

    if (m.find(st) != m.end())
    {
        return m[st];
    }

    if (s[st] == '0')
    {
        return -1;
    }

    int ans = INT_MAX;
    for (int i = st; i <= ed; i++)
    {
        for (int j = ju; j >= 1; j--)
        {
            if (s[st + j] == '1')
            {
                int f = func(s, st + j, ed, ju);
                if (f == -1)
                {
                    return f;
                }
                ans = min(ans, 1 + f);
            }
        }
    }

    if (ans == INT_MAX)
    {
        return -1;
    }
    m[st] = ans;

    return m[st];
}

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    cout << func(s, 0, a - 1, b);
    return 0;
}