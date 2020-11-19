#include <bits/stdc++.h>

#define ll long long

using namespace std;

// zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */
void solve()
{
    ll n, ans;
    cin >> n;
    ll mi = 0;
    ll su = 0;

    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        mi = max(mi, temp);
        su = (su + temp);
    }

    n--;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll mul = ((mi) * (n));
    if (su <= mul)
    {
        cout << (mul - su) << endl;
        return;
    }

    if (su % n == 0)
    {
        cout << 0 << endl;
        return;
    }

    ans = n - (su % n);

    cout << ans << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}