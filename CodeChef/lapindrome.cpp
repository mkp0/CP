//lapindrome

#include <bits/stdc++.h>

using namespace std;

bool func(string s)
{
    int mid = s.size() / 2;
    if (s.size() % 2 == 1)
    {
        mid += 1;
    }

    string L = s.substr(0, s.size() / 2), R = s.substr(mid, s.size() / 2);
    int arr[26] = {0};
    for (int i = 0; i < s.size() / 2; i++)
    {
        arr[L[i] - 'a']++;
        arr[R[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (func(s))
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
