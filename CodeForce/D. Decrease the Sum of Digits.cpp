#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

ull S(ull n)
{
    ull ans = 0;
    while (n)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ull n, s;
        cin >> n >> s;
        if (S(n) <= s)
        {
            cout << 0 << endl;
            continue;
        }
        ull temp = n;
        ull pos = 1;
        for (ull i = 0; i < 18; i++)
        {
            ull ld = (n / pos) % 10;
            ull add = pos * (10 - ld);
            n = n + add;
            if (S(n) <= s)
            {
                cout << n - temp << endl;
                break;
            }
            pos *= 10;
        }
    }
    return 0;
}