class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int one = word1.size();
        int two = word2.size();

        vector<vector<int>> dp(one + 1, vector<int>(two + 1));

        for (int i = 0; i <= one; i++)
        {
            for (int j = 0; j <= two; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = j;
                }
                else if (j == 0)
                {
                    dp[i][j] = i;
                }
                else if (word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
            }
        }
        return dp[one][two];
    }
};