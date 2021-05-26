class Solution
{
public:
    int mod = 1e9 + 7;

    long long int countPS(string str)
    {
        int n = str.size();
        long long int dp[n + 1][n + 1];
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
        }

        for (int j = 2; j <= n; j++) // lenth of substring
        {
            for (int i = 0; i <= n - j; i++)
            {
                int k = i + j - 1;
                long long su = dp[i + 1][k] + dp[i][k - 1]; //note :: here dp[i+1][k-1] repeated
                if (str[i] == str[k])
                {
                    dp[i][k] = (1 + su) % mod; // repeated string can make new palindrone with str[i] & str[k]
                }
                else
                {
                    dp[i][k] = (su - dp[i + 1][k - 1] + mod) % mod;
                }
            }
        }

        return dp[0][n - 1] % mod;
    }
};