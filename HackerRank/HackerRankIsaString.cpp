//HackerRank
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    string s2 = "hackerrank";

    while (test_case--)
    {
        string s1;
        cin >> s1;
        int j = 0;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[j])
            {
                j++;
            }
        }
        if (j == 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}