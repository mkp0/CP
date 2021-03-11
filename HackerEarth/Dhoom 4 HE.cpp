#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int s, d;
    int mod = 100000;
    cin >> s >> d;
    int n;
    cin >> n;
    vector<int> val;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        val.pb(x);
    }

    vector<int> vis(100000, -1);

    queue<int> q;
    q.push(s % mod);
    vis[s % mod] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u == d)
        {
            break;
        }

        for (auto x : val)
        {
            long long cal = (x * 1LL * u) % mod;
            if (vis[cal] == -1)
            {
                vis[cal] = vis[u] + 1;
                q.push(cal);
            }
        }
    }

    cout << vis[d] << " ";

    return 0;
}