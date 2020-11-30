#include <bits/stdc++.h>

using namespace std;
int v, e;
void solve(vector<int> adj[])
{
    int ans = 0;
    for (int i = 0; i < v; i++)
    {
        ans += adj[i].size();
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<int> adj[1000];

        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        solve(adj);
    }
    return 0;
}