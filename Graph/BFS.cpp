#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> adjList;

public:
    void addNode(T a, T b, bool isBid = true)
    {
        adjList[a].push_back(b);
        if (isBid)
            adjList[b].push_back(a);
    }

    void printGraph()
    {
        for (auto x : adjList)
        {
            cout << x.first << "->";

            for (T t : x.second)
            {
                cout << t << ",";
            }
            cout << endl;
        }
    }

    void bfs(T src)
    {
        map<T, bool> visited;
        queue<T> q;
        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            T temp = q.front();
            cout << temp << " ";
            q.pop();

            for (T x : adjList[temp])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }
};

int main()
{

    Graph<int> g;
    g.addNode(0, 1);
    g.addNode(1, 2);
    g.addNode(2, 3);
    g.addNode(4, 1);
    g.addNode(3, 2);

    g.printGraph();
    g.bfs(0);
    return 0;
}