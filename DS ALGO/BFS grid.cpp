const int nax = 1e3 + 10;
bool vis[nax][nax];
char last[nax][nax];
// n , m row and column respectively
// sx , sy source points
// ex , ey destination points
int sx, sy, ex, ey, n, m;

bool valid(int x, int y)
{
    if (x >= 0 && y >= 0 && x < n && y < m && !vis[x][y])
        return 1;
    return 0;
}
void bfs()
{
    vis[sx][sy] = 1;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        if (x == ex && y == ey)
        {
            string s;
            cout << "YES\n";
            while (x != sx || y != sy)
            {
                s += last[x][y];
                if (last[x][y] == 'U')
                    x++;
                else if (last[x][y] == 'D')
                    x--;
                else if (last[x][y] == 'L')
                    y++;
                else
                    y--;
            }
            reverse(s.begin(), s.end());
            cout << s.size() << "\n"
                 << s;
            exit(0);
        }
        if (valid(x - 1, y))
            vis[x - 1][y] = 1, last[x - 1][y] = 'U', q.push({x - 1, y});
        if (valid(x + 1, y))
            vis[x + 1][y] = 1, last[x + 1][y] = 'D', q.push({x + 1, y});
        if (valid(x, y - 1))
            vis[x][y - 1] = 1, last[x][y - 1] = 'L', q.push({x, y - 1});
        if (valid(x, y + 1))
            vis[x][y + 1] = 1, last[x][y + 1] = 'R', q.push({x, y + 1});
    }
    return;
}
