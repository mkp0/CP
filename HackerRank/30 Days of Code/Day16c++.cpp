#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    cin >> str1;

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] < 48 || str1[i] > 57)
        {
            cout << "Bad String" << endl;
            return 0;
        }
    }

    cout << str1 << endl;
    return 0;
}