class Solution
{
public:
    bool dfs(int i, int j, vector<vector<char>> &board, string word, int pt)
    {
        if (pt == word.size())
            return true;

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[pt])
            return false;

        char temp = board[i][j];
        board[i][j] = '?';

        bool ans = dfs(i - 1, j, board, word, pt + 1) || dfs(i, j - 1, board, word, pt + 1) || dfs(i, j + 1, board, word, pt + 1) || dfs(i + 1, j, board, word, pt + 1);
        board[i][j] = temp;
        return ans;
    }

    bool isWordExist(vector<vector<char>> &board, string word)
    {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (dfs(i, j, board, word, 0))
                {
                    return true;
                }
            }
        }

        return false;
    }
};