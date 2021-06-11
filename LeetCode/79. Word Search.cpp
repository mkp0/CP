class Solution
{
public:
    bool dfs(vector<vector<char>> &board, int i, int j, string word, int idx)
    {
        if (idx == word.size())
            return true;
        if (i >= board.size() || j >= board[0].size() || board[i][j] == '?' || word[idx] != board[i][j])
            return false;

        char temp = board[i][j];
        board[i][j] = '?';

        bool ans = dfs(board, i + 1, j, word, idx + 1) || dfs(board, i - 1, j, word, idx + 1) || dfs(board, i, j + 1, word, idx + 1) || dfs(board, i, j - 1, word, idx + 1);

        board[i][j] = temp;

        return ans;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (dfs(board, i, j, word, 0))
                    return true;
            }
        }

        return false;
    }
};