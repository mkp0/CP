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
vector<int> par(100001);
void solve()
{
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }

    par[1] = -1;

    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto y : g[x])
        {
            if (!par[y])
            {
                par[y] = x;
                q.push(y);
            }
        }
    }
    vector<int> ans;
    if (!par[v])
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        int st = v;
        ans.push_back(st);
        while (par[st] != -1)
        {
            ans.push_back(par[st]);
            st = par[st];
        }
        reverse(ans.begin(), ans.end());

        cout << ans.size() << endl;

        for (auto &x : ans)
        {
            cout << x << " ";
        }
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