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

// trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    vi a, b;
    for (int i = 1; i <= 2 * n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2)
        {
            a.push_back(i);
        }
        else
        {
            b.push_back(i);
        }
    }

    int as = a.size();
    int bs = b.size();

    if (as % 2 == 0 && bs % 2 == 0)
    {
        if (as > 0)
        {
            as--;
        }
        else
        {
            bs--;
        }
    }

    for (int i = 1; i < as; i += 2)
    {
        cout << a[i - 1] << " " << a[i] << endl;
    }

    for (int i = 1; i < bs; i += 2)
    {
        cout << b[i - 1] << " " << b[i] << endl;
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