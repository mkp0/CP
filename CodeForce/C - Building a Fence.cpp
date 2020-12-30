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
    int n, k;
    cin >> n >> k;
    int h[n];

    for (int i = 0; i < n; i++)
        cin >> h[i];

    int mi = h[0];
    int ma = h[0] + k;

    for (int i = 1; i < n - 1; i++)
    {
        int mit = h[i];
        int mat = h[i] + 2 * k - 1;

        if (mit >= ma || mat <= mi)
        {
            cout << "NO" << endl;
            return;
        }

        mi = max(mit, mi + 1 - k);
        ma = min(mat, ma - 1 + k);
    }

    int mit = h[n - 1];
    int mat = h[n - 1] + k;

    if (mit >= ma || mat <= mi)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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