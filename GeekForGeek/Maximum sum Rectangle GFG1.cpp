class Solution
{
public:
    int ka(int dp[], int s, int e)
    {
        int ans = 0;
        int su = 0;
        for (int i = s; i < e; i++)
        {
            su += dp[i];
            if (su < 0)
            {
                su = 0;
            }
            ans = max(ans, su);
        }
        return ans;
    }

    int maximumSumRectangle(int r, int c, vector<vector<int>> mat)
    {
        int ans = 0;

        int mini = INT_MIN;

        for (int i = 0; i < c; i++)
        {
            int dp[r];
            for (int k = 0; k < r; k++)
            {
                mini = max(mini, mat[k][i]);
                dp[k] = 0;
            }
            for (int j = i; j < c; j++)
            {
                for (int k = 0; k < r; k++)
                {
                    dp[k] += mat[k][j];
                }
                ans = max(ans, ka(dp, 0, r));
            }
        }

        if (mini <= 0)
        {
            return mini;
        }

        return ans;
    }
};