// Reduced to 1

#include <bits/stdc++.h>

using namespace std;

int memo[1000];

int ans(int num)
{
    if (num == 1)
    {
        return 0;
    }

    if (memo[num] != -1)
    {
        return memo[num];
    }
    int q1 = INT_MAX, q2 = INT_MAX, q3 = INT_MAX;

    if (num % 3 == 0)
    {
        q1 = ans(num / 3) + 1;
    }
    if (num % 2 == 0)
    {
        q2 = ans(num / 2) + 1;
    }
    q3 = ans(num - 1) + 1;

    memo[num] = min(q1, min(q2, q3));
    return memo[num];
}

int main()
{
    int num;
    cin >> num; //input
    for (int i = 0; i <= num; i++)
    {
        memo[i] = -1;
    }
    memo[0] = 0;
    memo[1] = 0;
    cout << ans(num);
    return 0;
}