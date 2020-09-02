//Grid DP
#include <bits/stdc++.h>

using namespace std;

int func(int mat[3][3])
{
    int memo[3][3];
    memo[0][0] = mat[0][0];
    for (int i = 1; i < 3; i++)
    {
        memo[0][i] = memo[0][i - 1] + mat[0][i];
    }

    for (int i = 1; i < 3; i++)
    {
        memo[i][0] = memo[i - 1][0] + mat[i - 1][0];
    }

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            memo[i][j] = min(memo[i - 1][j], memo[j - 1][i]) + mat[i][j];
        }
    }

    return memo[2][2];
}

int main()
{
    int mat[3][3] = {{1, 2, 3},
                     {4, 8, 2},
                     {1, 5, 3}};

    int ans = func(mat);
    cout << ans;
    return 0;
}