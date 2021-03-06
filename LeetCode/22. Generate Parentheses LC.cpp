class Solution
{
public:
    void gen(vector<string> &ans, string s, int n, int m)
    {
        if (n == 0 && m == 0)
        {
            ans.push_back(s);
            return;
        }
        if (m)
        {
            gen(ans, s + ")", n, m - 1);
        }
        if (n)
        {
            gen(ans, s + "(", n - 1, m + 1);
        }
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;

        gen(ans, "", n, 0);

        return ans;
    }
};