#include <bits/stdc++.h>

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
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;
vector<int> adj[10001];
int n;

bool BFS(int s)
{
    vector<bool> visited(n, false);
    queue<int> q;

    visited[s] = true;
    q.push(s);

    int co = 0;
    while (!q.empty())
    {
        s = q.front();
        q.pop();
        for (auto x : adj[s])
        {
            if (!visited[x])
            {
                if (adj[x].size() == 0)
                    co++;
                visited[x] = true;
                q.push(x);
            }
        }
        if (co == 1 || co == 2 || (co == 0 && adj[s].size()))
        {
            return false;
        }
        co = 0;
    }

    return true;
}

void solve()
{
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[x].pb(i);
    }

    if (BFS(1))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}