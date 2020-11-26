bool util(set<int> &visited, int i, int par, vector<int> g[])
{
    visited.insert(i);
    for (auto x : g[i])
    {
        if (x == par)
        {
            continue;
        }
        if (visited.find(x) != visited.end())
        {
            return true;
        }
        else
        {
            if (util(visited, x, i, g))
            {
                return true;
            }
        }
        // cout << x << " ";
    }

    return false;
}

bool isCyclic(vector<int> g[], int V)
{
    set<int> visited;
    for (int i = 0; i < V; i++)
    {
        if (visited.find(i) == visited.end())
        {
            if (util(visited, i, -1, g))
            {
                return true;
            }
        }
    }
    return false;
}