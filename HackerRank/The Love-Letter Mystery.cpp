//HackerRank

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        string s1;
        cin >> s1;
        int co = 0;
        for (int i = 0; i < s1.size() / 2; i++)
        {
            if (s1[i] != s1[s1.size() - 1 - i])
            {
                co += abs(s1[i] - s1[s1.size() - 1 - i]);
            }
        }
        cout << co << endl;
    }
    return 0;
}