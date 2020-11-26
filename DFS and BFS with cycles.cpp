#include <bits/stdc++.h>

using namespace std;

vector<int> g[10001];
int v;

//BFS
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    set<int> vis;
    vis.insert(src);

    while (!q.empty())
    {
        cout << q.front() << " ";
        int u = q.front();
        q.pop();

        for (auto x : g[u])
        {
            if (vis.find(x) == vis.end())
            {
                q.push(x);
                vis.insert(x);
            }
        }
    }
    cout << endl;
}

//DFS
void DFSutil(int src, set<int> &vis)
{
    cout << src << " ";
    vis.insert(src);

    for (auto x : g[src])
    {
        if (vis.find(x) == vis.end())
        {
            DFSutil(x, vis);
        }
    }
}

void DFS(int src)
{
    set<int> vis;
    DFSutil(src, vis);
    cout << endl;
}

bool isCyclebfs(int src, set<int> &vis)
{
    vector<int> par(v + 1, -1);
    queue<int> q;
    q.push(src);
    vis.insert(src);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto x : g[u])
        {
            if (vis.find(x) == vis.end())
            {
                par[x] = u;
                vis.insert(x);
                q.push(x);
            }
            else if (par[u] != x)
            {
                return true;
            }
        }
    }
    return false;
}

//Cycle detection using DFS

bool isCycleDFS(int src, set<int> &vis, int par)
{
    vis.insert(src);

    bool isCycle = false;

    for (auto x : g[src])
    {
        if (vis.find(x) == vis.end())
        {
            isCycle = isCycleDFS(x, vis, src);
            if (isCycle)
            {
                return true;
            }
        }
        else
        {
            if (x != par)
            {
                return true;
            }
        }
    }
    return isCycle;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> v;

    for (int i = 0; i < v; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    //BFS
    cout << "BFS" << endl;
    bfs(0);

    //DFS
    cout << "DFS" << endl;
    DFS(0);

    //DETECT CYCLE
    set<int> s1, s2;
    cout << "--- Detecting Cycle(bfs) ---" << endl;
    for (int i = 0; i < v; i++)
    {
        if ((s1.find(i) == s1.end()) && isCyclebfs(i, s1))
        {
            cout << "\tContain cycle" << endl;
            break;
        }
    }

    cout << "--- Detecting Cycle(dfs) ---" << endl;
    for (int i = 0; i < v; i++)
    {
        if ((s2.find(i) == s2.end()) && isCycleDFS(i, s2, -1))
        {
            cout << "\tContian cycle" << endl;
        }
    }

    return 0;
}