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

void solve()
{
    int v, e;
    cin >> v >> e;

    vector<vector<int>> edges;

    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        edges.pb({x, y, w});
    }

    vector<ll> dist(v + 1, inf);
    vector<int> par(v + 1);

    dist[1] = 0;
    int clc = -1;
    for (int i = 0; i < v; i++)
    {
        clc = -1;
        for (auto &x : edges)
        {
            if (dist[x[1]] > dist[x[0]] + x[2])
            {
                dist[x[1]] = dist[x[0]] + x[2];
                clc = x[1];
                par[x[1]] = x[0];
            }
        }
    }

    // if vth time not even single relaxation took place
    if (clc == -1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    // this loop must take us inside the loop in v iteration
    for (int i = 0; i < v; i++)
        clc = par[clc];
    int st = clc;
    // store out ans in reverse form
    vector<int> ans;
    // first element of the loop we already find
    ans.pb(st);
    st = par[st];
    // finding remaning element inside a loop
    while (st != clc)
    {
        ans.pb(st);
        st = par[st];
    }
    // first element is last element of a loop
    ans.pb(st);
    // as graph given is directed so direction matter
    reverse(ans.begin(), ans.end());
    for (auto x : ans)
    {
        cout << x << " ";
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