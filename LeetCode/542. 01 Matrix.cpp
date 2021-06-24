class Solution
{
public:
    bool issafe(int i, int j, int m, int n)
    {
        if (i < 0 || j < 0 || i >= m || j >= n)
            return false;

        return true;
    }

    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n, INT_MAX));

        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!mat[i][j])
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

            int ax[] = {1, -1, 0, 0};
            int ay[] = {0, 0, 1, -1};

            for (int i = 0; i < 4; i++)
            {
                if (issafe(x + ax[i], y + ay[i], m, n) && ans[x + ax[i]][y + ay[i]] == INT_MAX)
                {
                    ans[x + ax[i]][y + ay[i]] = ans[x][y] + 1;
                    q.push({x + ax[i], y + ay[i]});
                }
            }
        }

        return ans;
    }
};