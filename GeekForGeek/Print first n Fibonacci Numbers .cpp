#include <bits/stdc++.h>

using namespace std;
int memo[110];

int func(int n)
{
    if (memo[n] >= 0)
    {
        return memo[n];
    }
    memo[n] = func(n - 1) + func(n - 2);
    return memo[n];
}
int main()
{
    memset(memo, -1, sizeof(memo));
    memo[0] = 0;
    memo[1] = 1;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        func(n);
        for (int i = 1; i <= n; i++)
        {
            cout << memo[i] << " ";
        }
        cout << endl;
    }
    return 0;
}