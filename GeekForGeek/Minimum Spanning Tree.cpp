class Solution
{
public:
    //Function to find sum of weights of edges of the Minimum Spanning Tree.

    int find(int x, vector<int> &par)
    {
        if (x == par[x])
            return x;
        else
        {
            x = find(par[x], par);
        }
        return x;
    }

    void merge(int a, int b, vector<int> &par)
    {
        par[find(a, par)] = find(b, par);
    }

    int spanningTree(int v, vector<vector<int>> adj[])
    {
        vector<vector<int>> edges;

        for (int i = 0; i < v; i++)
        {
            for (auto &x : adj[i])
            {
                edges.push_back({x[1], i, x[0]});
            }
        }

        sort(edges.begin(), edges.end());

        vector<int> par(v);
        for (int i = 0; i < v; i++)
            par[i] = i;

        int ans = 0;

        for (auto x : edges)
        {
            int a = find(x[1], par);
            int b = find(x[2], par);

            if (a == b)
                continue;
            else
            {
                ans += x[0];
                merge(x[1], x[2], par);
            }
        }

        return ans;
    }
};