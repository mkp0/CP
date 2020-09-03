//largest common subsequence
#include <bits/stdc++.h>
using namespace std;

int memo[100][100];

int lcs(string a, string b, int l1, int l2)
{
    if (l1 == 0 || l2 == 0)
    {
        return 0;
    }
    if (memo[l1][l2] != -1)
    {
        return memo[l1][l2];
    }
    if (a[l1 - 1] == b[l2 - 1])
    {
        memo[l1][l2] = 1 + lcs(a, b, l1 - 1, l2 - 1);
        return memo[l1][l2];
    }
    memo[l1][l2] = max(lcs(a, b, l1 - 1, l2), lcs(a, b, l1, l2 - 1));
    return memo[l1][l2];
}

int main()
{
    string a, b;
    cin >> a >> b;

    memset(memo, -1, sizeof(memo));
    cout << lcs(a, b, a.size(), b.size());
    return 0;
}