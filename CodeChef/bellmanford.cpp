#include <bits/stdc++.h>

using namespace std;
int v, e;

struct node
{
    int u, v, w;
};

vector<node> graph;

void BellmanFord(int src)
{

    vector<int> dist(v + 1, INT_MAX);
    dist[src] = 0;

    // //relexation n-1 times

    for (int i = 0; i < v - 1; i++)
    {
        for (int j = 0; j < e; j++)
        {

            int x, y, w;
            x = graph[j].u;
            y = graph[j].v;
            w = graph[j].w;
            if (dist[x] != INT_MAX && dist[x] + w < dist[y])
                dist[y] = dist[x] + w;
        }
    }

    // //step 3

    for (int i = 0; i < e; i++)
    {
        int u = graph[i].u;
        int v = graph[i].v;
        int weight = graph[i].w;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
        {
            printf("Graph contains negative weight cycle");
        }
    }
    cout << "haaa";

    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < v; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        node g;
        cin >> g.u >> g.v >> g.w;
        graph.push_back(g);
    }

    BellmanFord(0);
    return 0;
}