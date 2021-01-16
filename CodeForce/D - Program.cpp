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
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;
    vector<int> forw(n + 1);
    vector<int> mi(n + 1, 0);
    vector<int> ma(n + 1, 0);
    vector<int> mib(n + 1, 0);
    vector<int> mab(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            forw[i + 1] = forw[i] - 1;
        }
        else
        {
            forw[i + 1] = forw[i] + 1;
        }
    }

    mi[0] = 0;
    ma[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        mi[i] = min(mi[i - 1], forw[i]);
        ma[i] = max(ma[i - 1], forw[i]);
    }

    mib[n] = forw[n];
    mab[n] = forw[n];

    for (int i = n - 1; i >= 0; i--)
    {
        mib[i] = min(mib[i + 1], forw[i]);
        mab[i] = max(mab[i + 1], forw[i]);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        int mini = min(mi[l], mib[r] - (forw[r] - forw[l]));
        int maxi = max(ma[l], mab[r] - (forw[r] - forw[l]));

        cout << maxi - mini + 1 << "\n";
    }
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