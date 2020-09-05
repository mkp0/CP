#include <bits/stdc++.h>

using namespace std;

int maze[100][100], co;

void mimUtil(int x1, int y1, int x, int y)
{
    if (x1 == x && y1 == y)
    {
        co++;
    }
    if (x1 > x || y1 > y)
    {
        return;
    }

    if (maze[x1 + 1][y1] != 0)
    {
        mimUtil(x1 + 1, y1, x, y);
    }
    if (maze[x1][y1 + 1] != 0)
    {
        mimUtil(x1, y1 + 1, x, y);
    }
}

void mim(int x, int y)
{
    mimUtil(1, 1, x, y);
    cout << co;
}

int main()
{
    int x, y;
    co = 0;
    memset(maze, 0, sizeof(maze));
    cin >> x >> y;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cin >> maze[i][j];
        }
    }
    mim(x, y);
    return 0;
}