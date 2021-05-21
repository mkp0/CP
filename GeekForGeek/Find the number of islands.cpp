class Solution
{
public:
    int n;
    int m;
    bool vis[501][501];

    bool isvalid(int i, int j)
    {
        if (i < 0 || j < 0)
        {
            return false;
        }
        if (i >= n || j >= m)
        {
            return false;
        }
        return true;
    }

    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        if (!isvalid(i, j) || vis[i][j])
            return;
        if (grid[i][j] == '1')
            vis[i][j] = true;
        else
            return;

        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
        dfs(i + 1, j + 1, grid);
        dfs(i - 1, j - 1, grid);
        dfs(i + 1, j - 1, grid);
        dfs(i - 1, j + 1, grid);
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
    }

    //Function to find the number of islands.
    int numIslands(vector<vector<char>> &grid)
    {
        int ans = 0;

        n = grid.size();

        if (n == 0)
            return ans;

        m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vis[i][j] = false;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((!vis[i][j]) && (grid[i][j] == '1'))
                {
                    ans++;
                    dfs(i, j, grid);
                }
            }
        }

        return ans;
    }
};