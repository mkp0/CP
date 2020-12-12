#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> m;

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    for (auto x : m)
    {
        int s1 = x.second;

        if (n % 2 == 0 && s1 > (n / 2))
        {
            cout << 0 << endl;
            return;
        }
        if (n % 2 == 1 && s1 > (n / 2 + 1))
        {
            cout << 0 << endl;
            return;
        }
    }

    cout << 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}