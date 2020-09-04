#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[v];
    }

    void addNode(int u, int v, bool bidir = true)
    {
        l[u].push_back(v);
        if (bidir == true)
        {
            l[v].push_back(u);
        }

        return;
    }

    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i;
            for (auto x : l[i])
            {
                cout << "->" << x;
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5);
    g.addNode(0, 1);
    g.addNode(1, 2);
    g.addNode(2, 3);
    g.addNode(4, 1);
    g.addNode(3, 2);

    g.printGraph();
    return 0;
}