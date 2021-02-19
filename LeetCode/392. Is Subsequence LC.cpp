// 392. Is Subsequence
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {

        int i = 0;
        int n = s.size();
        if (n == 0)
        {
            return true;
        }

        for (auto x : t)
        {
            if (x == s[i])
            {
                i++;
                n--;
                if (n == 0)
                {
                    return true;
                }
            }
        }

        return false;
    }
};