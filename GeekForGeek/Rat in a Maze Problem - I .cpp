// User function template for C++

class Solution
{
public:
    void dfs(vector<vector<int>> &m, int i, int j, string s, int n, vector<string> &ans)
    {
        if (i < 0 || j < 0 || i >= n || j >= n || !m[i][j])
        {
            return;
        }
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(s);
            return;
        }
        m[i][j] = 0;
        dfs(m, i + 1, j, s + 'D', n, ans);
        dfs(m, i, j + 1, s + 'R', n, ans);
        dfs(m, i - 1, j, s + 'U', n, ans);
        dfs(m, i, j - 1, s + 'L', n, ans);
        m[i][j] = 1;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;

        string s = "";
        dfs(m, 0, 0, s, n, ans);

        sort(ans.begin(), ans.end());
        return ans;
    }
};