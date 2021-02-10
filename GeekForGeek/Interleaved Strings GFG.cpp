/*You are required to complete this method */
bool isInterleave(string A, string B, string C)
{
    int a = A.size(), b = B.size(), c = C.size();

    if (a + b != c)
    {
        return false;
    }

    int dp[a + 1][b + 1];

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            dp[i][j] = 0;
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
            }
            else if (i == 0 && B[j - 1] == C[j + i - 1])
            {
                dp[i][j] = dp[i][j - 1];
            }
            else if (j == 0 && A[i - 1] == C[i + j - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else if (A[i - 1] != C[i + j - 1] && B[j - 1] == C[i + j - 1])
            {
                dp[i][j] = dp[i][j - 1];
            }
            else if (A[i - 1] == C[i + j - 1] && B[j - 1] != C[i + j - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else if (A[i - 1] == C[i + j - 1] && B[j - 1] == C[i + j - 1])
            {
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            }
        }
    }
    return dp[a][b];
}