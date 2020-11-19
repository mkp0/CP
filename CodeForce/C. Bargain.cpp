#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

// zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        a[i] = s[i] - '0';
    }

    const int MOD = 1e+9 + 7;

    ll ans = 0;
    ll sum = 0;
    ll p = 1;

    for (ll i = n - 1; i >= 0; --i)
    {
        // k*a[i] is the instance contribution and sum is contirbution by deleting forward and i * (i + 1) / 2 % MOD * p % MOD is the used when delete from back
        ll k = (i * (i + 1) / 2 % MOD * p % MOD + sum) % MOD;
        sum = (sum + p * (n - i) % MOD) % MOD;
        p = p * 10 % MOD;

        ans = (ans + a[i] * k % MOD) % MOD;
    }

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
    int t = 1;
    while (t--)
    {
        solve();
    }
}