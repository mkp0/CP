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
int v, e;
vector<int> g[100001];
vector<int> color(100001, 0);

bool dfs(int st, int col)
{
    color[st] = col;

    for (auto x : g[st])
    {
        if (color[x] && color[x] == col)
        {
            return true;
        }
        else if (!color[x])
        {
            if (col == 1 && dfs(x, 2))
            {
                return true;
            }
            else if (col == 2 && dfs(x, 1))
            {
                return true;
            }
        }
    }

    return false;
}

void solve()
{
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    for (int i = 1; i <= v; i++)
    {
        if (!color[i] && dfs(i, 1))
        {
            cout << "IMPOSSIBLE";
            return;
        }
    }

    for (int i = 1; i <= v; i++)
    {
        cout << color[i] << " ";
    }
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