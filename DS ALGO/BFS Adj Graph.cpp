void BFS(int s)
{
    vector<bool> visited(V, false);
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        s = q.front();
        cout << s << " ";
        q.pop();
        for (auto x : adj[s])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}
