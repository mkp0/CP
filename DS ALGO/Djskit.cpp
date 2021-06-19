#define ll long long
vector<pair<ll, ll>> adj[900001];
typedef pair<ll, ll> ipair;
ll vertex, edges;
void shortestPath(int s)
{
    vector<ll> dist(vertex + 1, 1e15);
    vector<ll> vis(vertex + 1, false);

    priority_queue<ipair, vector<ipair>, greater<ipair>> pq;

    pq.push({0, s});
    dist[s] = 0;

    while (!pq.empty())
    {
        ll u = pq.top().second;
        pq.pop();
        if (vis[u])
            continue;
        vis[u] = true;
        for (auto x : adj[u])
        {
            ll v = x.first;
            ll w = x.second;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i <= vertex; ++i)
        cout << dist[i] << " ";
}

// -------------------- or ----------------------------- //

const int N = 1e5 + 5;

int n, m;
ll arrival[N], departure[N], vis[N], parent[N];
vector<pair<int, int>> g[N];

int dijkstra(int source, int destination)
{
    for (int i = 1; i <= n; i++)
    {
        arrival[i] = 1e18;
        departure[i] = 1e18;
    }
    arrival[source] = 0;
    set<pair<int, int>> s;
    s.insert({0, source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        vis[x.second] = 1;
        departure[x.second] = arrival[x.second];
        for (auto it : g[x.second])
        {
            if (arrival[it.first] > departure[x.second] + it.second)
            {
                s.erase({arrival[it.first], it.first});
                arrival[it.first] = departure[x.second] + it.second;
                s.insert({arrival[it.first], it.first});
                parent[it.first] = x.second;
            }
        }
    }
    if (!vis[destination])
    {
        return -1;
    }

    /* Path */

    // int v = destination;
    // vector<int> ans;
    // while (parent[v])
    // {
    //     ans.push_back(v);
    //     v = parent[v];
    // }
    // ans.push_back(source);
    // reverse(ans.begin(), ans.end());
    // for (auto it : ans)
    //     cout << it << " ";

    return arrival[destination];
}