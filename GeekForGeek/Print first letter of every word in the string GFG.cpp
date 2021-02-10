class Solution
{
public:
    string firstAlphabet(string S)
    {
        string ans;

        int n = S.size();

        if (n == 0)
        {
            return "";
        }

        ans.push_back(S[0]);

        for (int i = 1; i < n; i++)
        {
            if (S[i] == ' ' && i + 1 < n && S[i + 1] != ' ')
            {
                ans.push_back(S[i + 1]);
                i++;
            }
        }

        return ans;
    }
};