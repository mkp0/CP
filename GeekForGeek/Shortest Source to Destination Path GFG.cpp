class Solution
{
public:
    int n, m;

    bool issafe(int i, int j)
    {
        if (i < 0 || j < 0 || i >= n | j >= m)
            return false;
        return true;
    }

    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y)
    {
        n = N, m = M;
        queue<pair<int, int>> pi;
        int i = 0, j = 0;
        pi.push({0, 0});
        if (!A[0][0])
            return -1;
        A[0][0] = 2;
        while (!pi.empty())
        {
            auto x = pi.front();
            pi.pop();
            i = x.first;
            j = x.second;

            if (i == X && j == Y)
            {
                break;
            }
            if (issafe(i + 1, j) && (A[i + 1][j] == 1))
            {
                pi.push({i + 1, j});
                A[i + 1][j] = A[i][j] + 1;
            }
            if (issafe(i, j + 1) && (A[i][j + 1] == 1))
            {
                pi.push({i, j + 1});
                A[i][j + 1] = A[i][j] + 1;
            }
            if (issafe(i - 1, j) && (A[i - 1][j] == 1))
            {
                pi.push({i - 1, j});
                A[i - 1][j] = A[i][j] + 1;
            }
            if (issafe(i, j - 1) && (A[i][j - 1] == 1))
            {
                pi.push({i, j - 1});
                A[i][j - 1] = A[i][j] + 1;
            }
        }

        if (!A[X][Y] || A[X][Y] == 1)
            return -1;

        return A[X][Y] - 2;
    }
};