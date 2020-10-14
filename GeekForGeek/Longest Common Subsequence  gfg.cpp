#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int l1, l2;
    cin >> l1 >> l2;
    string a, b;
    cin >> a >> b;
    int memo[l1 + 1][l2 + 1];
    int ans = 0;
    memset(memo, 0, sizeof(memo));
    for (int i = 1; i <= l1; i++)
    {
        for (int j = 1; j <= l2; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                memo[i][j] = memo[i - 1][j - 1] + 1;
                ans = max(ans, memo[i][j]);
            }
            else
            {
                memo[i][j] = max(memo[i][j - 1], memo[i - 1][j]);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}