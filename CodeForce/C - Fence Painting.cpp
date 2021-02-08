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

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    vector<int> g[n + 1];
    vector<int> pres(n + 1, 0);
    vector<int> ans;
    int co = 0;
    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (a[i] != x)
        {
            g[x].pb(i + 1);
        }
        else
        {
            pres[x] = i + 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (g[x].size() == 0)
        {
            if (pres[x])
            {
                ans.pb(pres[x]);
                while (co)
                {
                    ans.pb(pres[x]);
                    co--;
                }
            }
            else
            {
                if (i == m - 1)
                {
                    cout << "NO\n";
                    return;
                }
                else
                {
                    co++;
                }
            }
        }
        else
        {
            ans.pb(g[x].back());
            while (co)
            {
                ans.pb(g[x].back());
                co--;
            }
            pres[x] = g[x].back();
            g[x].pop_back();
        }
    }

    for (auto x : g)
    {
        if (x.size())
        {
            ok = false;
        }
    }

    if (!ok)
    {
        cout << "NO\n";
    }
    else
    {
        ok = false;
        cout << "YES\n";
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}