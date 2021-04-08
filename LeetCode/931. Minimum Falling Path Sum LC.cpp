class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();

        int dp[r][c];

        for (int i = 0; i < c; i++)
        {
            dp[r - 1][i] = matrix[r - 1][i];
        }

        for (int i = r - 2; i >= 0; i--)
        {
            for (int j = 0; j < c; j++)
            {
                dp[i][j] = dp[i + 1][j];
                if (j)
                {
                    dp[i][j] = min(dp[i + 1][j], dp[i + 1][j - 1]);
                }
                if (j < c - 1)
                {
                    dp[i][j] = min(dp[i][j], dp[i + 1][j + 1]);
                }
                dp[i][j] += matrix[i][j];
            }
        }

        int ans = INT_MAX;

        for (int i = 0; i < c; i++)
        {
            ans = min(ans, dp[0][i]);
        }
        return ans;
    }
};