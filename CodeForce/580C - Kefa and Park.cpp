#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<int> g[200000 + 1];
vector<int> cat;
int ans = 0;
void solve(int cur, int par, int cats)
{
    if (cats > m)
    {
        return;
    }
    int co = 1;

    for (auto x : g[cur])
    {
        if (x != par)
        {
            co = 0;
            solve(x, cur, cats * cat[x] + cat[x]);
        }
    }
    ans += co;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> m;
    cat.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        cat.push_back(temp);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    solve(1, -1, cat[1]);
    cout << ans << endl;
    return 0;
}