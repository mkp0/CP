#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ipair;
map<int, vector<ipair>> adj;
#define inf 1e18
long long dist[100010], node[100010];

int v, m;

void printpath(int n)
{
    if (n != 1)
        printpath(node[n]);
    printf("%d ", n);
}

void shortestPath(int s)
{
    set<ipair> pq;

    pq.insert({0, s});
    dist[s] = 0;

    while (!pq.empty())
    {
        int u = (*pq.begin()).second;
        pq.erase(pq.begin());

        for (auto x : adj[u])
        {

            int v = x.first;
            int w = x.second;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.insert({dist[v], v});
                node[v] = u;
            }
        }
    }
}

int main()
{
    cin >> v >> m;
    for (int i = 0; i <= v; i++)
    {
        dist[i] = inf;
    }
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;

        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }

    dist[0] = 0;

    shortestPath(1);

    if (dist[v] == inf)
        printf("-1\n");
    else
        printpath(v);

    return 0;
}