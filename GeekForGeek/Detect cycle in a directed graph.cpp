class Solution
{
public:
    vector<bool> vis;
    vector<bool> backvis; // store the back-tracked visied

    //Function to detect cycle in a directed graph.

    bool helper(int src, vector<int> g[])
    {
        if (!vis[src])
        {
            vis[src] = true;
            backvis[src] = true;

            for (auto x : g[src])
            {
                if (backvis[x])
                {
                    return true;
                }
                else
                {
                    if (helper(x, g))
                    {
                        return true;
                    }
                }
            }
        }
        backvis[src] = false;
        return false;
    }

    bool isCyclic(int v, vector<int> g[])
    {
        vis.clear();
        vis.resize(v, false);
        backvis.clear();
        backvis.resize(v, false);

        for (int i = 0; i < v; i++)
        {
            if (helper(i, g))
            {
                return true;
            }
        }

        return false;
    }
};