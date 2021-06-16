class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0 || (matrix[i][j] == '0'))
                {
                    dp[i][j] = matrix[i][j] - '0';
                    ans = max(ans, dp[i][j]);
                }
                else
                {
                    int mi = dp[i - 1][j - 1];
                    mi = min(dp[i - 1][j], mi);
                    mi = min(dp[i][j - 1], mi);
                    dp[i][j] += 1 + mi;
                    if (dp[i][j])
                        ans = max(ans, dp[i][j] * dp[i][j]);
                }
            }
        }

        return ans;
    }
};