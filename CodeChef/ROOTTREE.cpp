#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = -1;
        map<int, int> m;
        cin >> n;

        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            m[v]++;
            m[u] += 0;
        }
        for (auto x : m)
        {
            if (x.second == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}