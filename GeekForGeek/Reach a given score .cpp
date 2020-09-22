#include <bits/stdc++.h>

using namespace std;

int func(int x)
{
    int memo[x + 1];
    memset(memo, 0, sizeof(memo));
    memo[0] = 1;

    for (int i = 3; i <= x; i++)
    {
        memo[i] += memo[i - 3];
    }
    for (int i = 5; i <= x; i++)
    {
        memo[i] += memo[i - 5];
    }
    for (int i = 10; i <= x; i++)
    {
        memo[i] += memo[i - 10];
    }

    return memo[x];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        cout << func(x) << endl;
    }
    return 0;
}