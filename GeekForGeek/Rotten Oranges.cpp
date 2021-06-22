class Solution
{
public:
    //Function to find minimum time required to rot all oranges.
    int m, n;

    bool isvalid(int i, int j)
    {
        if (i < 0 || j < 0 || i >= m || j >= n)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>> &grid)
    {

        queue<pair<pair<int, int>, int>> q;

        m = grid.size();
        n = grid[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                    q.push({{i, j}, 0});
            }
        }

        int ans = 0;

        while (!q.empty())
        {
            auto x = q.front();
            q.pop();

            int ui = x.first.first;
            int uj = x.first.second;
            int val = x.second;

            ans = max(ans, val);

            if (isvalid(ui - 1, uj) && grid[ui - 1][uj] == 1)
            {
                grid[ui - 1][uj] = 2;
                q.push({{ui - 1, uj}, val + 1});
            }

            if (isvalid(ui + 1, uj) && grid[ui + 1][uj] == 1)
            {
                q.push({{ui + 1, uj}, val + 1});
                grid[ui + 1][uj] = 2;
            }

            if (isvalid(ui, uj - 1) && grid[ui][uj - 1] == 1)
            {
                grid[ui][uj - 1] = 2;
                q.push({{ui, uj - 1}, val + 1});
            }

            if (isvalid(ui, uj + 1) && grid[ui][uj + 1] == 1)
            {
                grid[ui][uj + 1] = 2;
                q.push({{ui, uj + 1}, val + 1});
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                    return -1;
            }
        }

        return ans;
    }
};
