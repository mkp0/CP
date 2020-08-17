#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int num, ans = 0;
        cin >> num;
        for (int i = 5; (num / i) != 0; i = i * 5)
        {
            ans += num / i;
        }
        cout << ans << endl;
        ;
    }
    return 0;
}