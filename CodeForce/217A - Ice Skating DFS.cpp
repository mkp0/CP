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
//dsu implementation
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

int mod = 1e9 + 7;
int n;
int x[101];
int y[101];
int vis[101];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    int comp = n;

    DSU mydsu;
    mydsu.init(n + 1);
    mydsu.connected -= 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((x[i] == x[j]) || y[i] == y[j])
            {
                mydsu.unite(i, j);
            }
        }
    }

    cout << mydsu.connected << endl;
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