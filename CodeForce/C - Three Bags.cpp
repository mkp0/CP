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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v1(a);
    vector<int> v2(b);
    vector<int> v3(c);
    ll s1 = 0, s2 = 0, s3 = 0, su;
    for (auto &x : v1)
        cin >> x, s1 += x;
    for (auto &x : v2)
        cin >> x, s2 += x;
    for (auto &x : v3)
        cin >> x, s3 += x;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());

    int mi = INT_MIN;
    mi = max({v1[0], v2[0], v3[0]});

    su = max(s1 + s2 + s3 - 2 * v1[0] - 2 * v2[0] - 2 * v3[0] + 2 * mi, s1 + s2 + s3 - 2 * min({s1, s2, s3}));

    cout << su << "\n";
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}