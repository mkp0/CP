#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    int prev = -2, ans = 0, temp = 0;

    for (auto x : s)
    {
        if (prev + 1 == x)
        {
            temp++;
            ans = max(temp, ans);
        }
        else
        {
            temp = 1;
            ans = max(ans, temp);
        }
        prev = x;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}