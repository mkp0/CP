class Solution
{
public:
    void dfs(int src, vector<vector<int>> &ans, vector<int> temp, vector<vector<int>> &g)
    {
        if (src == g.size() - 1)
        {
            temp.push_back(src);
            ans.push_back(temp);
            return;
        }
        temp.push_back(src);
        for (auto x : g[src])
        {
            dfs(x, ans, temp, g);
        }
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &g)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(0, ans, temp, g);
        return ans;
    }
};