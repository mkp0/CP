#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ipair;

class Graph
{
    int v;
    list<ipair> *adj;

public:
    Graph(int s);

    void addEdge(int u, int v, int w);

    void shortestPath(int src);
};

Graph::Graph(int v)
{
    this->v = v;
    adj = new list<ipair>[v];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
}

//Dijkstret Algo
void Graph::shortestPath(int s)
{
    vector<int> dist(v, INT_MAX);
    priority_queue<ipair, vector<ipair>, greater<ipair>> pq;

    pq.push({0, s});
    dist[s] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto x : adj[u])
        {
            int v = x.first;
            int w = x.second;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < v; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main()
{
    int V = 9;
    Graph g(V);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.shortestPath(0);

    return 0;
}

///

const int N = 1e5 + 5;

int n, m;
int arrival[N], departure[N], vis[N], parent[N];
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