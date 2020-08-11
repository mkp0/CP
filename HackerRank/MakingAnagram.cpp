#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m1, m2;
    int ans = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        m1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        m2[s2[i]]++;
    }
    for (int i = 97; i <= 122; i++)
    {
        ans += abs(m1[i] - m2[i]);
    }

    cout << ans;
    return 0;
}