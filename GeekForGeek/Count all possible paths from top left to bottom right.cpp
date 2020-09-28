#include <bits/stdc++.h>

using namespace std;
const unsigned int M = 1000000007;
typedef long long ll;
map<pair<int, int>, ll> memo;

ll func(int s, int e, int m, int n)
{
    if (s == m && e == n)
    {
        return 1;
    }

    if (memo[{s, e}] != 0)
    {
        return memo[{s, e}];
    }

    ll a1 = 0, a2 = 0;

    if (s != m)
    {
        a1 = func(s + 1, e, m, n);
    }
    if (e != n)
    {
        a2 = func(s, e + 1, m, n);
    }

    memo[{s, e}] = a1 + a2;

    return (a1 + a2) % M;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        memo.clear();
        cin >> m >> n;
        cout << func(1, 1, m, n) << endl;
    }
    return 0;
}