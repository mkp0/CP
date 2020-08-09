#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int b, w, bc, wc, z, ans = 0;
        cin >> b >> w;
        cin >> bc >> wc >> z;

        if (bc > wc + z)
        {
            ans = wc * (b + w) + z * wc;
        }
        else if (wc > bc + z)
        {
            ans = bc * (b + w) + w * bc;
        }
        else
        {
            ans = bc * b + wc * w;
        }
        cout << ans << endl;
    }

    return 0;
}