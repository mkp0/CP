#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, w;
    long long n, ans = 0;
    cin >> k >> n >> w;

    ans = ((k * (w) * (w + 1)) / 2) - n;

    if (ans >= 0)
    {
        cout << ans;
    }
    else
    {
        cout << 0;
    }

    return 0;
}