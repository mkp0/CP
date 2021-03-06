class Solution
{
public:
    void gen(vector<string> &ans, int n, int m, string s)
    {
        if (n == 0 && m == 0)
        {
            ans.push_back(s);
        }

        if (m)
        {
            gen(ans, n, m - 1, s + ")");
        }
        if (n)
            gen(ans, n - 1, m + 1, s + "(");
    }

    vector<string> AllParenthesis(int n)
    {
        vector<string> ans;

        gen(ans, n, 0, "");

        return ans;
    }
};