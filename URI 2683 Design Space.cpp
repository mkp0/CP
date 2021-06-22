#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define llinf 1e18
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))

using namespace std;

/* I'm gonna be the King of the Pirates */
int mod = 1e9 + 7;

struct DSU
{
    int connected;
    vector<int> par, sz;

    void init(int n)
    {
        par = sz = vector<int>(n + 1, 0);
        for (int i = 1; i <= n; i++)
            par[i] = i, sz[i] = 1;
        connected = n;
    }

    int getPar(int u)
    {
        while (u != par[u])
        {
            par[u] = par[par[u]];
            u = par[u];
        }
        return u;
    }

    int getSize(int u)
    {
        return sz[getPar(u)];
    }

    void unite(int u, int v)
    {
        int par1 = getPar(u), par2 = getPar(v);

        if (par1 == par2)
            return;

        connected--;

        if (sz[par1] > sz[par2])
            swap(par1, par2);

        sz[par2] += sz[par1];
        sz[par1] = 0;
        par[par1] = par[par2];
    }
};

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> edges;

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        edges.pb({z, x, y});
    }

    sort(edges.begin(), edges.end());

    DSU us;
    us.init(n + 1);

    int mi = 0;

    for (auto x : edges)
    {
        int a = us.getPar(x[1]);
        int b = us.getPar(x[2]);

        if (a == b)
            continue;
        us.unite(a, b);
        mi += x[0];
    }

    sort(edges.begin(), edges.end(), greater<vector<int>>());

    us.init(n + 1);

    int ma = 0;

    for (auto x : edges)
    {
        int a = us.getPar(x[1]);
        int b = us.getPar(x[2]);

        if (a == b)
            continue;
        us.unite(a, b);
        ma += x[0];
    }

    cout << ma << endl;
    cout << mi << endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}