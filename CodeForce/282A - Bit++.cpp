#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0;
    int l;
    cin >> l;

    while (l--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
            a++;
        else
        {
            a--;
        }
    }
    cout << a;
    return 0;
}