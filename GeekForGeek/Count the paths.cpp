#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void countPathsUtil(int, int, bool[], int &);

public:
    Graph(int V);
    void addEdge(int u, int v);
    int countPaths(int s, int d);
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}
int Graph::countPaths(int s, int d)
{

    bool *visited = new bool[V];
    memset(visited, false, sizeof(visited));
    int pathCount = 0;
    countPathsUtil(s, d, visited, pathCount);
    return pathCount;
}
void Graph::countPathsUtil(int u, int d, bool visited[],
                           int &pathCount)
{
    visited[u] = true;
    if (u == d)
        pathCount++;
    else
    {
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                countPathsUtil(*i, d, visited, pathCount);
    }
    visited[u] = false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        Graph g(a);
        for (int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            g.addEdge(u, v);
        }
        int x, y;
        cin >> x >> y;
        cout << g.countPaths(x, y) << endl;
    }
    return 0;
}