#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l;
        string s;
        cin >> l >> s;
        long long ans = 0, co = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '1')
            {
                co += 1;
                ans += co;
            }
        }
        cout << ans << endl; //lC2 + l or (l*(l+1))/2
    }

    return 0;
}