#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a = "101", b = "010";
        bool isGood = false;
        isGood = s.find(a) != string::npos || s.find(b) != string::npos;

        if (isGood)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
    return 0;
}