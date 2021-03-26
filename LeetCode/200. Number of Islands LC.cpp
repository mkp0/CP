class Solution
{
public:
    int n, m;
    int vis[301][301];

    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        if (i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == '0' || vis[i][j])
            return;
        vis[i][j] = 1;

        dfs(i - 1, j, grid);
        dfs(i, j - 1, grid);
        dfs(i, j + 1, grid);
        dfs(i + 1, j, grid);
    }

    int numIslands(vector<vector<char>> &grid)
    {

        n = grid.size();
        m = grid[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1' && !vis[i][j])
                {
                    ans++;
                    dfs(i, j, grid);
                }
            }
        }

        return ans;
    }
};