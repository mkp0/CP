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
const int MAX = 222112;
vector<int> g[MAX];
vector<int> depths(MAX);
vector<int> ans(MAX);

void dfs1(int src, int par)
{

    for (auto x : g[src])
    {
        if (x == par)
            continue;
        else
        {
            dfs1(x, src);
        }
    }

    // till here assume we calculate all our children ans
    depths[src] = 0; // we assume this will be distance src===leaf

    for (auto x : g[src])
    {
        if (x != par)
        {
            depths[src] = max(depths[src], 1 + depths[x]);
        }
    }
}

// this function will do the real work
void dfs(int src, int par, int parans)
{
    vector<int> pref; // prefix ans before perticular child i
    vector<int> suff; // suffix ans after perticular child i

    for (auto x : g[src])
    {
        if (x != par)
        {
            pref.pb(depths[x]);
            suff.pb(depths[x]);
        }
    }

    int n = pref.size();

    loop(i, 1, n - 1, 1)
    {
        pref[i] = max(pref[i], pref[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = max(suff[i], suff[i + 1]);
    }

    ans[src] = parans;
    int pos = 0;

    for (auto x : g[src])
    {
        if (x != par)
        {
            int partial_ans = parans;
            if (pos)
                partial_ans = max(partial_ans, pref[pos - 1]);
            if (pos != (n - 1))
                partial_ans = max(partial_ans, suff[pos + 1]);
            dfs(x, src, partial_ans + 1);
            pos++;
        }
    }

    ans[src] = parans + 1;

    if (n)
    {
        ans[src] = max(ans[src], 1 + pref[n - 1]);
    }
}

void solve()
{
    int n;
    cin >> n;

    loop(i, 1, n - 1, 1)
    {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    dfs1(1, -1); // this cal depth of each node root===1
    dfs(1, -1, -1);

    loop(i, 1, n, 1)
    {
        cout << ans[i] << " ";
    }
}

int32_t main()
{
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}