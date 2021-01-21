class Solution
{
public:
    int editDistance(string s, string t)
    {
        int memo[t.size() + 1][s.size() + 1];
        for (int i = 0; i <= s.size(); i++)
        {
            memo[0][i] = i;
        }
        for (int i = 0; i <= t.size(); i++)
        {
            memo[i][0] = i;
        }

        for (int i = 1; i <= t.size(); i++)
        {
            for (int j = 1; j <= s.size(); j++)
            {
                if (t[i - 1] == s[j - 1])
                {
                    memo[i][j] = memo[i - 1][j - 1];
                }
                else
                {
                    memo[i][j] = 1 + min(memo[i - 1][j - 1], min(memo[i][j - 1], memo[i - 1][j]));
                }
            }
        }
        return memo[t.size()][s.size()];
    }