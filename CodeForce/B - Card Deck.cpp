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
    int n;
    cin >> n;
    vector<int> idx(n + 1);
    vector<bool> vis(n + 1);
    vector<int> arr(n + 1);

    vis[0] = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        idx[arr[i]] = i;
        vis[i] = false;
    }

    int cur = n;
    while (cur)
    {
        if (!vis[cur])
            for (int i = idx[cur]; arr[i] <= cur && i <= n; i++)
            {
                cout << arr[i] << " ";
                vis[arr[i]] = true;
            }
        cur--;
    }

    cout << endl;
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