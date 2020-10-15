#include <bits/stdc++.h>

using namespace std;

int memo[100][100];

int func(char *x, char *y, int m, int n)
{
    if (m < 0 || n < 0)
    {
        return 0;
    }
    if (memo[m][n] >= 0)
    {
        return memo[m][n];
    }
    if (x[m] == y[n])
    {
        memo[m][n] = 1 + func(x, y, m - 1, n - 1);
        return memo[m][n];
    }
    memo[m][n] = max(func(x, y, m - 1, n), func(x, y, m, n - 1));
    return memo[m][n];
}

int main()
{
    char s1[100];
    char s2[100];
    memset(memo, -1, sizeof(memo));
    cin >> s1 >> s2;
    int ans = func(s1, s2, strlen(s1) - 1, strlen(s2) - 1);

    cout << ans << endl;
    return 0;
}