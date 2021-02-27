for (int i = 0; i < v; i++)
{
    if (!vis[i])
    {
        dfs(i, vis, g);
        li = i;
    }
}