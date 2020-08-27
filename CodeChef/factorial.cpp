//facotrial
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long num;
        int ans = 0, mul5 = 5;
        scanf("%lld", &num);
        while (num / mul5)
        {

            ans = ans + num / mul5;

            mul5 *= 5;
        }
        cout << ans << endl;
    }
    return 0;
}