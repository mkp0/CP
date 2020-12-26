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
    cin >> n >> m;

    ll arr[10];

    arr[0] = m % 10;
    for (int i = 1; i < 10; i++)
    {
        arr[i] = (arr[i - 1] + m) % 10;
    }

    for (int i = 1; i < 10; i++)
    {
        arr[i] = (arr[i - 1] + arr[i]);
    }

    ll div = n / (m * 10);
    ll divi = n / m;

    divi = divi % 10;

    // cout << divi << " ";

    ll ans = div * arr[9];
    if (divi && (n >= m))
    {
        ans += arr[divi - 1];
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}