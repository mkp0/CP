void dfs(int x, int y, vector<vector<char>> &v)
{
    if (x < 0 || x + 1 > n || y < 0 || y + 1 > m || v[x][y] == '#')
    {
        return;
    }

    v[x][y] = '#';
    dfs(x + 1, y, v);
    dfs(x - 1, y, v);
    dfs(x, y + 1, v);
    dfs(x, y - 1, v);
}