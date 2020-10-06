#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    string s;
    cin >> s;

    for (int k = 0; k < t; k++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << endl;
}