#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c1, c2, s1 = 0, s2 = 0;
        cin >> c1 >> c2;
        int num;
        cin >> num;
        while (num--)
        {
            int temp;
            cin >> temp;
            s1 += temp;
            cin >> temp;
            s2 += temp;
        }
        cout << max(c1, c2) * min(s1, s2) + min(c1, c2) * max(s1, s2) << endl;
    }
    return 0;
}