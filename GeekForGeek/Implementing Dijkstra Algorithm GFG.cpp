class Solution
{
public:
    /*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> dijkstra(int v, vector<vector<int>> adj[], int S)
    {
        set<pair<int, int>> s;
        s.insert({0, S});

        vector<int> dist(v, INT_MAX);
        dist[S] = 0;

        while (!s.empty())
        {
            auto y = (*s.begin());
            s.erase(y);

            for (auto x : adj[y.second])
            {
                if (dist[x[0]] > dist[y.second] + x[1])
                {
                    dist[x[0]] = dist[y.second] + x[1];
                    s.insert({dist[x[0]], x[0]});
                }
            }
        }

        return dist;
    }
};