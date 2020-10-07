#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n, k;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    cin >> k;

    for (auto x : m)
    {
        if (x.second == k)
        {
            cout << x.first << endl;
            return;
        }
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}