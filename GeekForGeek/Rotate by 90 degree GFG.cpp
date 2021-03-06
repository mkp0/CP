void rotate(vector<vector<int>> &matrix)
{
    // transpose
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}