class Solution
{
public:
    //Function to find whether a path exists from the source to destination.

    bool dfs(int i, int j, vector<vector<int>> &grid)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || !grid[i][j])
        {
            return false;
        }

        if (grid[i][j] == 2)
            return true;

        grid[i][j] = 0;

        return dfs(i - 1, j, grid) || dfs(i + 1, j, grid) || dfs(i, j - 1, grid) || dfs(i, j + 1, grid);
    }

    bool is_Possible(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && dfs(i, j, grid))
                {
                    return true;
                }
            }
        }
        return false;
    }
};