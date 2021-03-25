#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
ll arrival[N], departure[N], vis[N], parent[N];
vector<pair<int, int>> g[N];
set<int> times[N];

int dijkstra(int source, int destination)
{
    for (int i = 1; i <= n; i++)
    {
        arrival[i] = 1e18;
        departure[i] = 1e18;
    }
    arrival[source] = 0;
    set<pair<int, int>> s;
    s.insert({0, source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        vis[x.second] = 1;
        departure[x.second] = arrival[x.second];
        while (times[x.second].find(departure[x.second]) != times[x.second].end())
        {
            departure[x.second]++;
        }
        for (auto it : g[x.second])
        {

            if (arrival[it.first] > departure[x.second] + it.second)
            {
                s.erase({arrival[it.first], it.first});
                arrival[it.first] = departure[x.second] + it.second;
                s.insert({arrival[it.first], it.first});
                parent[it.first] = x.second;
            }
        }
    }
    if (!vis[destination])
    {
        return -1;
    }

    return arrival[destination];
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            int x;
            cin >> x;
            times[i].insert(x);
        }
    }

    cout << dijkstra(1, n) << "\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}