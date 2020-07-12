#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case)
    {
        int a, b;
        cin >> a;
        cin >> b;

        int res = 0;

        for (int i = 1; i < a; i++)
        {
            for (int j = i + 1; j <= a; j++)
            {
                if ((j & i) < b)
                {
                    if ((j & i) > res)
                        res = i & j;
                }
            }
        }

        cout << res << endl;

        test_case--;
    }

    return 0;
}