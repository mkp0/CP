#include <bits/stdc++.h>
#define pb push_back
using namespace std;

bool isbi(int src, vector<int> g[], vector<int> &vis, vector<int> &col, int color)
{
    vis[src] = true;
    col[src] = color;

    for (auto x : g[src])
    {
        if (!vis[x])
        {
            bool is = isbi(x, g, vis, col, color ^ 1);
            if (!is)
                return false;
        }
        else if (col[x] == color)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> g[n];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a - 1].pb(b - 1);
        g[b - 1].pb(a - 1);
    }

    vector<int> vis(n, 0);
    vector<int> col(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if (!isbi(i, g, vis, col, 0))
            {
                cout << "no\n";
                return;
            }
        }
    }

    cout << "yes\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}