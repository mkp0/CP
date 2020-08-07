//HackerRank
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    string s1;
    int co = 0;
    cin >> s1;

    for (int i = 1; i < s1.size() - 1; i++)
    {
        if (s1[i] == '1' && s1[i - 1] == '0' && s1[i + 1] == '0')
        {
            co++;
            s1[i + 1] = '1';
        }
    }

    cout << co;
    return 0;
}