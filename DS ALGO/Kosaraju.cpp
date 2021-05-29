int n, v;
const int N = 100001; // v vertics
vector<int> g[N];     // store graph
vector<int> rg[N];    // store reversed graph
vector<bool> vis;     // visited tracker
vector<int> order;    // order tracker using dfs1

void dfs1(int src) // forward graph dfs
{
    vis[src] = true;
    for (auto x : g[src])
    {
        if (!vis[x])
        {
            dfs1(x);
        }
    }
    order.pb(src);
}

void dfs2(int src) // backward graph dfs
{
    vis[src] = true;
    for (auto x : rg[src])
    {
        if (!vis[x])
        {
            dfs2(x);
        }
    }
}

//step : 1 taking input
/*
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        rg[y].push_back(x);
    }

*/

//step : 2 store the order using dfs 1
/*
    vis.clear();
    vis.resize(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs1(i);
        }
    }
    order.push_back(src);
*/

// step : 3 reverse the order
// reverse(order.begin(), order.end());

// step : 4 this dfs run on reverse graph and each time each run a dfs on strongly connected component

/*
    vis.clear();
    vis.resize(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        if (!vis[order[i]])
        {
            dfs2(order[i]);
            ! and do your operation
        }
    }

*/