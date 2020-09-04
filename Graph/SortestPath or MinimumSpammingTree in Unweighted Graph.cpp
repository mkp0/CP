#include <bits/stdc++.h>

using namespace std;

class Graph
{
    map<int, list<int>> adjList; //private

public:
    Graph()
    {
    }

    void addEdges(int u, int v, bool isBid = true)
    {
        adjList[u].push_back(v);
        if (isBid)
        {
            adjList[v].push_back(u);
        }
    }

    //printing
    void print()
    {
        for (auto x : adjList)
        {
            cout << x.first;
            for (auto y : x.second)
            {
                cout << "->" << y;
            }
            cout << endl;
        }
    }

    //BFS breath first traversal
    void bfs(int src)
    {
        queue<int> q;
        map<int, bool> visited;
        for (auto x : adjList)
        {
            visited[x.first] = false;
        }

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            cout << q.front() << " ";

            for (auto x : adjList[q.front()])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
            }

            q.pop();
        }
    }

    // //sortest path

    void sortestPath(int src)
    {
        queue<int> q;
        map<int, int> distance;

        for (auto x : adjList)
        {
            distance[x.first] = INT_MAX;
        }

        distance[src] = 0;
        q.push(src);

        while (!q.empty())
        {
            for (auto x : adjList[q.front()])
            {
                if (distance[x] == INT_MAX)
                {
                    q.push(x);
                    distance[x] = distance[q.front()] + 1;
                }
            }
            q.pop();
        }

        for (auto x : adjList)
        {
            cout << "Minimum distance betweeen " << x.first << " and " << src << " is " << distance[x.first] << endl;
        }
    }
};

int main()
{
    Graph g;
    g.addEdges(0, 1);
    g.addEdges(0, 2);
    g.addEdges(1, 2);
    g.addEdges(2, 3);
    g.addEdges(4, 5);
    g.addEdges(5, 2);

    g.print();

    //BRF
    g.bfs(0);

    cout << endl;
    //sortest path
    g.sortestPath(0);
    return 0;
}