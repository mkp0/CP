//Hackerrrank
#include <bits/stdc++.h>

using namespace std;

int memo[50];

int func(int a)
{
    if (a == 0)
    {
        return 1;
    }
    if (a < 0)
    {
        return 0;
    }
    if (memo[a] != -1)
    {
        return memo[a];
    }
    int q1 = func(a - 1);
    int q2 = func(a - 2);
    int q3 = func(a - 3);

    memo[a] = q1 + q2 + q3;
    return memo[a];
}

int main()
{
    int t;
    cin >> t;

    memset(memo, -1, sizeof(memo));
    while (t--)
    {
        int a;
        cin >> a;
        cout << func(a) << endl;
    }
    return 0;
}