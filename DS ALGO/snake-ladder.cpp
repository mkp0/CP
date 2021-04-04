#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
    }

    //minimum shortest path
    T bfs(T src, T des)
    {
        map<T, int> dist;
        queue<T> q;

        for (auto node_pair : l)
        {
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);
        dist[src] = 0;

        while (!q.empty())
        {
            T node = q.front();
            q.pop();

            for (auto x : l[node])
            {
                if (dist[x] == INT_MAX)
                {
                    q.push(x);
                    dist[x] = dist[node] + 1;
                }
            }
        }

        // Printing the distance to every node
        for (auto x : l)
        {
            T node = x.first;
            int d = dist[node];
            cout << "NODE " << node << " Distance " << d << endl;
        }

        return dist[des];
    }
};

int main()
{

    int board[50] = {0};
    //Snake and Ladders
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;

    // Add Edges to the graph
    Graph<int> g;
    for (int i = 0; i <= 36; i++)
    {
        for (int dice = 1; dice <= 6; dice++)
        {
            int j = i + dice;
            j += board[j];

            if (j <= 36)
            {
                g.addEdge(i, j);
            }
        }
    }

    g.addEdge(36, 36);

    cout << g.bfs(0, 36);

    return 0;
}