#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<char> arr;
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        arr.clear();
        string s1;
        cin >> s1;

        for (int i = 0; i < s1.size(); i++)
        {
            arr.insert(s1[i]);
        }
        cout << arr.size() << endl;
    }
    return 0;
}