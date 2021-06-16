class Solution
{
public:
    bool dfs(int i, int j, vector<vector<char>> &board, string dict, int pt)
    {
        int n = board.size();
        int m = board[0].size();

        if (pt == dict.size())
        {
            return true;
        }

        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != dict[pt])
        {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '?';
        bool ans = false;
        ans = ans || dfs(i + 1, j, board, dict, pt + 1);
        ans = ans || dfs(i - 1, j, board, dict, pt + 1);
        ans = ans || dfs(i, j + 1, board, dict, pt + 1);
        ans = ans || dfs(i, j - 1, board, dict, pt + 1);
        ans = ans || dfs(i + 1, j + 1, board, dict, pt + 1);
        ans = ans || dfs(i - 1, j + 1, board, dict, pt + 1);
        ans = ans || dfs(i + 1, j - 1, board, dict, pt + 1);
        ans = ans || dfs(i - 1, j - 1, board, dict, pt + 1);
        board[i][j] = temp;

        return ans;
    }

    vector<string> wordBoggle(vector<vector<char>> &board, vector<string> &dict)
    {
        vector<string> ans;

        int n = board.size();
        int m = board[0].size();

        for (auto x : dict)
            for (int i = 0; i < n; i++)
            {
                bool is = false;
                for (int j = 0; j < m; j++)
                {
                    if (dfs(i, j, board, x, 0))
                    {
                        is = true;
                        ans.push_back(x);
                        break;
                    }
                }
                if (is)
                    break;
            }
        return ans;
    }
};