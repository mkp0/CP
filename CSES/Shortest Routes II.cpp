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
    ll adjMat[501][501];
    for (int i = 0; i <= 500; i++)
    {
        for (int j = 0; j <= 500; j++)
        {
            adjMat[i][j] = llinf;
        }
    }
    ll v, e, q;
    cin >> v >> e >> q;

    for (int i = 0; i < e; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adjMat[a][b] = min(adjMat[a][b], c);
        adjMat[b][a] = min(adjMat[b][a], c);
    }

    for (int i = 1; i <= v; i++)
    {
        adjMat[i][i] = 0;
    }

    for (ll k = 1; k <= v; k++)
    {
        for (ll i = 1; i <= v; i++)
        {
            for (ll j = 1; j <= v; j++)
            {
                adjMat[i][j] = min(adjMat[i][j], adjMat[i][k] + adjMat[k][j]);
            }
        }
    }

    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        if (adjMat[a][b] == llinf)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << adjMat[a][b] << "\n";
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