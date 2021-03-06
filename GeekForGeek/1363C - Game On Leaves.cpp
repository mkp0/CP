#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, e;
        cin >> n >> e;
        vector<int> g[n + 1];

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }

        if (g[e].size() <= 1)
        {
            cout << "Ayush\n";
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "Ayush\n";
            }
            else
            {
                cout << "Ashish\n";
            }
        }
    }

    return 0;
}