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
    ll n;
    cin >> n;

    ll su = 0;
    su = n * (n + 1) / 2;
    if (su % 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";

        ll f = su / 2, s = su / 2;
        vector<int> a, b;

        for (int i = n; i >= 1; i--)
        {
            if (f - i >= 0)
            {
                a.pb(i);
                f -= i;
            }
            else
            {
                b.pb(i);
            }
        }

        cout << a.size() << "\n";
        for (auto x : a)
            cout << x << " ";
        cout << "\n";

        cout << b.size() << "\n";

        for (auto x : b)
            cout << x << " ";
        cout << "\n";
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}