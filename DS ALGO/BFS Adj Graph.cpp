void BFS(int s)
{
    vector<bool> visited(V, false);
    queue<int> q;

    visited[s] = true;
    queue.push_back(s);

    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        for (auto x : adj[s])
        {
            if (!visited[x])
            {
                visited[x] = true;
                queue.push_back(x);
            }
        }
    }
}
