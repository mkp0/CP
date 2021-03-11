#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, 1, -1, -1, 0, 0, -1, 1};
int dy[] = {1, -1, -1, 1, 1, -1, 0, 0};
int r, c;

bool isvalid(int x, int y)
{
    if (x < r && y < c && x >= 0 && y >= 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cin >> r >> c;
    int x, y;
    cin >> x >> y;

    int mat[r][c];
    memset(mat, 0, sizeof(mat));

    queue<pair<int, int>> q;
    q.push({x, y});
    mat[x][y] = 1;

    while (!q.empty())
    {
        auto u = q.front();
        q.pop();
        int x1 = u.first;
        int y1 = u.second;

        for (int i = 0; i < 8; i++)
        {
            if (isvalid(x1 + dx[i], y1 + dy[i]) && !mat[x1 + dx[i]][y1 + dy[i]])
            {
                mat[x1 + dx[i]][y1 + dy[i]] = mat[x1][y1] + 1;
                q.push({x1 + dx[i], y1 + dy[i]});
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] - 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}