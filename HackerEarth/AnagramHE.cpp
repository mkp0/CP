#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        int sum = 0;
        cin >> a >> b;
        int m[26] = {0};
        for (int i = 0; i < a.size(); i++)
        {
            m[a[i] - 'a']++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            m[b[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            sum += abs(m[i]);
        }
        cout << sum << endl;
    }
    return 0;
}