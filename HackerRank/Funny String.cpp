//HackerRank
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        string s1, s2;
        cin >> s1;
        s2 = s1;
        reverse(s1.begin(), s1.end());
        int par = 0;
        for (int i = 0; i < s1.size() - 1; i++)
        {
            if (abs(s1[i + 1] - s1[i]) == abs(s2[i + 1] - s2[i]))
            {
                par++;
            }
            else
            {
                break;
            }
        }
        if (par == (s1.size() - 1))
        {
            cout << "Funny" << endl;
        }
        else
        {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}