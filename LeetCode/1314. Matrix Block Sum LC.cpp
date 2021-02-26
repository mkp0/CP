class Solution
{
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        vector<vector<int>> ans = dp;

        dp[0][0] = mat[0][0];
        for (int i = 1; i < m; i++)
        {
            dp[i][0] = mat[i][0] + dp[i - 1][0];
        }
        for (int i = 1; i < n; i++)
        {
            dp[0][i] = mat[0][i] + dp[0][i - 1];
        }

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + mat[i][j] - dp[i - 1][j - 1];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a = i - k - 1;
                int a1 = min(i + k, m - 1);
                int b = j - k - 1;
                int b1 = min(j + k, n - 1);

                ans[i][j] = dp[a1][b1];
                if (a >= 0)
                {
                    ans[i][j] -= dp[a][b1];
                }
                if (b >= 0)
                {
                    ans[i][j] -= dp[a1][b];
                }
                if (a >= 0 && b >= 0)
                {
                    ans[i][j] += dp[a][b];
                }
            }
        }

        return ans;
    }
};