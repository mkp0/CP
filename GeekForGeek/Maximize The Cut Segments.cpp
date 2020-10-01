#include <bits/stdc++.h>

using namespace std;

map<int, int> memo;

int func(int l, int x, int y, int z)
{

    if (l == 0)
    {
        return 0;
    }
    if (memo[l] > 0)
    {
        return memo[l];
    }

    int a1 = INT_MIN, a2 = INT_MIN, a3 = INT_MIN;

    if (l - x >= 0)
    {
        a1 = func(l - x, x, y, z);
    }
    if (l - y >= 0)
    {
        a2 = func(l - y, x, y, z);
    }
    if (l - z >= 0)
    {
        a3 = func(l - z, x, y, z);
    };

    memo[l] = 1 + max(a1, max(a2, a3));
    return memo[l];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, x, y, z;
        cin >> l;
        memo.clear();
        cin >> x >> y >> z;
        cout << func(l, x, y, z) << endl;
    }
    return 0;
}