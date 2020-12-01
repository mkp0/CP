#include <bits/stdc++.h>

using namespace std;

vector<int> tree[200001];

void solve(int cur, int par, vector<int> &ans)
{
    int subord = 0;

    for (auto x : tree[cur])
    {
        if (x != par)
        {
            solve(x, cur, ans);
            subord += (1 + ans[x]);
        }
    }
    ans[cur] = subord;
}

int main()
{

    int n;
    cin >> n;
    vector<int> ans(n + 1, 0);

    for (int i = 2; i < n + 1; i++)
    {
        int x;
        cin >> x;
        tree[x].push_back(i);
        tree[i].push_back(x);
    }

    solve(1, 0, ans);

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}