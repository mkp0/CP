
class Solution
{

public:
    int minDiffernce(int arr[], int n)
    {
        int su = 0;

        for (int i = 0; i < n; i++)
        {
            su += arr[i];
        }

        bool dp[n + 1][su + 1];

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }
        for (int j = 0; j <= su; j++)
        {
            dp[0][j] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= su; j++)
            {
                if (j >= arr[i - 1])
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int ans = INT_MAX;

        for (int i = 0; i <= su; i++)
        {
            if (dp[n][i])
            {
                ans = min(ans, abs(su - 2 * i));
            }
        }
        return ans;
    }
};