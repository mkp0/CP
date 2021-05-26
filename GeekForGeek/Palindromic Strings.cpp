class Solution
{

public:
    int isPossiblePalindrome(string s, int K)
    {
        // this question is based on longes palindronic subsequence
        // modification :- subtract s.size()-lps<=k return true else false

        int n = s.size();

        int dp[n][n];
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                dp[i][i + 1] = 2;
            else
            {
                dp[i][i + 1] = max(dp[i + 1][i], dp[i][i]);
            }
        }

        for (int j = 3; j <= n; j++)
        {
            for (int i = 0; i <= n - j; i++)
            {
                int k = i + j - 1; // last char first char i
                if (s[i] == s[k])
                {
                    dp[i][k] = 2 + dp[i + 1][k - 1];
                }
                else
                {
                    dp[i][k] = max(dp[i + 1][k], dp[i][k - 1]);
                }
            }
        }
        return (K >= (n - dp[0][n - 1]));
    }
};