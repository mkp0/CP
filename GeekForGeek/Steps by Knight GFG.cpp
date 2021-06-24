class Solution
{
public:
    //Function to find out minimum steps Knight needs to reach target position.

    bool issafe(int i, int j, int n)
    {
        if (i <= 0 || j <= 0 || i > n || j > n)
            return false;

        return true;
    }

    int minStepToReachTarget(vector<int> &kp, vector<int> &tp, int N)
    {
        vector<vector<int>> board(N + 1, vector<int>(N + 1, 0));

        queue<pair<int, int>> q;
        q.push({tp[0], tp[1]});

        board[tp[0]][tp[1]] = 1;

        while (!q.empty())
        {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();

            if (a == kp[0] && b == kp[1])
                return board[a][b] - 1;

            if (issafe(a - 2, b + 1, N) && !board[a - 2][b + 1])
            {
                q.push({a - 2, b + 1});
                board[a - 2][b + 1] = board[a][b] + 1;
            }
            if (issafe(a + 2, b - 1, N) && !board[a + 2][b - 1])
            {
                q.push({a + 2, b - 1});
                board[a + 2][b - 1] = board[a][b] + 1;
            }
            if (issafe(a - 2, b - 1, N) && !board[a - 2][b - 1])
            {
                q.push({a - 2, b - 1});
                board[a - 2][b - 1] = board[a][b] + 1;
            }
            if (issafe(a + 2, b + 1, N) && !board[a + 2][b + 1])
            {
                q.push({a + 2, b + 1});
                board[a + 2][b + 1] = board[a][b] + 1;
            }
            if (issafe(a - 1, b + 2, N) && !board[a - 1][b + 2])
            {
                q.push({a - 1, b + 2});
                board[a - 1][b + 2] = board[a][b] + 1;
            }
            if (issafe(a + 1, b - 2, N) && !board[a + 1][b - 2])
            {
                q.push({a + 1, b - 2});
                board[a + 1][b - 2] = board[a][b] + 1;
            }
            if (issafe(a - 1, b - 2, N) && !board[a - 1][b - 2])
            {
                q.push({a - 1, b - 2});
                board[a - 1][b - 2] = board[a][b] + 1;
            }
            if (issafe(a + 1, b + 2, N) && !board[a + 1][b + 2])
            {
                q.push({a + 1, b + 2});
                board[a + 1][b + 2] = board[a][b] + 1;
            }
        }

        return -1;
    }
};