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
vll store;
void func()
{
    for (ll i = 1; i < 100000; i++)
    {
        ll val = ((3 * i * i) + i) / 2;
        store.push_back(val);
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << 0 << endl;
    }
    else
    {
        int co = 0;
        while (n >= 2)
        {
            for (int i = 0; i < 100000; i++)
            {
                if (store[i] > n)
                {
                    int x = n / store[i - 1];
                    co += x;
                    n -= store[i - 1] * x;
                    // cout << store[i] << " ";
                    break;
                }
            }
        }
        cout << co << endl;
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
    func();
    while (t--)
    {
        solve();
    }
    return 0;
}