class NumMatrix
{
    vector<vector<int>> sum;
    int m = 0, n = 0;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        m = matrix.size();
        if (m == 0)
            return;
        n = matrix[0].size();

        sum = vector<vector<int>>(m, vector<int>(n, 0));
        sum[0][0] = matrix[0][0];
        for (int i = 1; i < m; i++)
            sum[i][0] = matrix[i][0] + sum[i - 1][0];

        for (int i = 1; i < n; i++)
            sum[0][i] = matrix[0][i] + sum[0][i - 1];

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + matrix[i][j] - sum[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int a, int b, int a1, int b1)
    {
        a = a - 1;
        b = b - 1;
        int ans = sum[a1][b1];
        if (a >= 0)
        {
            ans -= sum[a][b1];
        }
        if (b >= 0)
        {
            ans -= sum[a1][b];
        }
        if (a >= 0 && b >= 0)
        {
            ans += sum[a][b];
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */