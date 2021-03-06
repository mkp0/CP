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
#define MOD 1e9 + 7
using namespace std;

//stringMul String Multiplication ,  trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    ll n, m;
    cin >> n;
    ll a[n];

    ll maxa = 0, maxb = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            a[i] = a[i] + a[i - 1];
        }
        maxa = max(maxa, a[i]);
    }

    cin >> m;
    ll b[m];

    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
        if (i > 0)
        {
            b[i] = b[i] + b[i - 1];
        }
        maxb = max(maxb, b[i]);
    }

    cout << maxb + maxa << endl;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}