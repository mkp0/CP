class Solution
{
public:
    int isNegativeWeightCycle(int n, vector<vector<int>> edges)
    {
        vector<int> dist(n, INT_MAX);

        dist[0] = 0;
        for (int i = 1; i < n; i++)
        {
            for (auto x : edges)
            {
                if (dist[x[0]] != INT_MAX && dist[x[1]] > x[2] + dist[x[0]])
                    dist[x[1]] = x[2] + dist[x[0]];
            }
        }

        for (auto x : edges)
        {
            if (dist[x[0]] != INT_MAX && dist[x[1]] > x[2] + dist[x[0]])
                return true;
        }

        return false;
    }
};