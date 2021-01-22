void DFSUtil(int src, vector<bool> &vis)
{
    vis[src] = true;
    cout << src << " ";

    for (auto x : adj[src])
        if (!vis[x])
            DFSUtil(x, vis);
}

void DFS(int v)
{
    vector<bool> vis(V, false);

    DFSUtil(v, vis);
}