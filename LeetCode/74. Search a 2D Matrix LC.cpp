class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        bool is = false;
        for (int i = 0; i < matrix.size(); i++)
        {
            if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
                is = find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end();

            if (is)
            {
                return true;
            }
        }
        return false;
    }
};