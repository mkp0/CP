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
    ll l, r, m;
    cin >> l >> r >> m;

    ll a = 0, b = 0, c = 0;

    if (m < l)
    {
        cout << l << " " << r - (l - m % l) << " " << r << endl;
        return;
    }
    for (ll i = l; i <= r; i++)
    {
        if (m % i <= abs(r - l))
        {
            a = i;
            b = r;
            c = r - m % i;
            break;
        }
        if ((i - m % i) <= abs(r - l))
        {
            a = i;
            c = r;
            b = r - (i - m % i);
            break;
        }
    }

    cout << a << " " << b << " " << c << endl;
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