class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int n = s.size();
        vector<bool> dp(n + 1, false);

        dp[0] = true;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (dp[j])
                {
                    string temp = s.substr(j, i - j);

                    if (find(wordDict.begin(), wordDict.end(), temp) != wordDict.end())
                    {
                        dp[i] = true;
                    }
                }
            }
        }

        return dp[n];
    }
};