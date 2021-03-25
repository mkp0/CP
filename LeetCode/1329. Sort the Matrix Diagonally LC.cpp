class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> op;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                op[i - j].push(mat[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = op[i - j].top();
                op[i - j].pop();
            }
        }

        return mat;
    }
};