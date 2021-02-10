class Solution
{
public:
    string removeDups(string S)
    {
        vector<bool> dp(26, false);

        int n = S.size();

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (!dp[S[i] - 'a'])
            {
                dp[S[i] - 'a'] = true;
                ans.push_back(S[i]);
            }
        }

        return ans;
    }
};