class Solution
{
public:
    //Function to find distance of nearest 1 in the grid for each cell.
    bool issafe(int i, int j, int m, int n)
    {
        if (i < 0 || j < 0 || i >= m || j >= n)
            return false;

        return true;
    }

    vector<vector<int>> nearest(vector<vector<int>> grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, -1));

        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        }

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (issafe(x + 1, y, m, n) && ans[x + 1][y] == -1)
            {
                ans[x + 1][y] = ans[x][y] + 1;
                q.push({x + 1, y});
            }
            if (issafe(x, y + 1, m, n) && ans[x][y + 1] == -1)
            {
                ans[x][y + 1] = ans[x][y] + 1;
                q.push({x, y + 1});
            }
            if (issafe(x, y - 1, m, n) && ans[x][y - 1] == -1)
            {
                ans[x][y - 1] = ans[x][y] + 1;
                q.push({x, y - 1});
            }
            if (issafe(x - 1, y, m, n) && ans[x - 1][y] == -1)
            {
                ans[x - 1][y] = ans[x][y] + 1;
                q.push({x - 1, y});
            }
        }

        return ans;
    }
};